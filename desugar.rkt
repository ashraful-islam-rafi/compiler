#lang racket
(provide desugar add-prims-to-prog)

(require "prims.rkt")   ; maybe change to prims.rkt ?

; Helper function to check if symbol λ or tag lambda
(define (λ-or-lambda? str)
  (match str
    [(or (== 'lambda) (== 'λ)) #t]
    [else #f]))


(define (add-prims-to-prog prog)
  (foldl (λ (op acc)
           `(let ([,op (λ args (apply-prim ,op args))]) ,acc))
         
         (foldr (λ (builtin prog)
                  (match-define `(,name ,lam) builtin) 
                  `(letrec ([,name ,lam]) ,prog))
                prog
                builtins)
         default-prims))

; from matt's article
(define (desugar-qq n qq-exp)
  (match qq-exp
    [(list 'unquote exp)
     (if (= n 1)
         (desugar exp)
         (list 'list ''unquote 
               (desugar-qq (- n 1) exp)))]
    
    [`(quasiquote ,qq-exp)
     `(list 'quasiquote ,(desugar-qq (+ n 1) qq-exp))]
    
    [(cons (list 'unquote-splicing exp) rest)
     (if (= n 1)
         `(append1 ,exp ,(desugar-qq n rest))
         (cons (list 'unquote-splicing (desugar-qq (- n 1) exp))
               (desugar-qq n rest)))]
    
    [`(,qq-exp1 . ,rest)
     `(cons ,(desugar-qq n qq-exp1)
            ,(desugar-qq n rest))]
       
    [else
     (desugar `',qq-exp)]))


(define (desugar exp)
  ;(displayln (~a "desugar-->: " exp))
  (match exp
    [(? symbol?) exp]
    
    [`(quote ,datum)
     (let loop ([temp_datum datum])
       (match temp_datum
         [(? null?) ''()]
         [(? symbol?)   `(quote ,temp_datum)]
         [(or (? number?) (? boolean?) (? string?)) temp_datum]
         [(? pair?) `(cons ,(loop (car temp_datum))
                           ,(loop (cdr temp_datum)))]
         [else
          (raise `(error ,(format "Unknown quote format: ~a" temp_datum)))]))]
    
    
    #;[`(let ([,xs ,rhs] ...) ,body)
       (desugar `((λ ,xs ,body) ,@rhs))]
    
    [`(let ([,xs ,rhss] ...) ,body)
     `(let ,(map (λ (x rhs) `(,x ,(desugar rhs))) xs rhss) ,(desugar body))]
    

    [`(let* () ,ebody) (desugar ebody)]
    [`(let* ([,lhs ,rhs] ,e-pairs ...) ,ebody)      
     (desugar `(let ([,lhs ,rhs])
                 (let* ,e-pairs ,ebody)))]

    [`(letrec ([,fname ,exp]) ,body)
     (match fname
       [`Ycomb (desugar `(let ([,fname ,exp]) ,body))]
       [_
        (desugar `(let ([,fname (Ycomb (λ (,fname) ,exp))]) ,body))])]

    
    [`(,(? λ-or-lambda?) ,(? symbol? args) ,body)
     `(λ ,args ,(desugar body))]

    [`(,(? λ-or-lambda?) ,(? (listof symbol?) args) ,body)
     `(λ ,args ,(desugar body))]
    
    [`(,(? λ-or-lambda?) ,improper-args ,body)
     (define (extract-params args)
       (match args
         [`(,(? symbol? a) . ,b)
          (match-define (cons lst x) (extract-params b))
          (cons (cons a lst) x)]
         [(? symbol? x) (cons null x)]
         [_
          (raise `(error ,(format "invalid parameter list! ~a" improper-args)))]))
     
     (match-define (cons req opt) (extract-params improper-args))

     (define arg-x (gensym `param-lst))

     (define (simplify-lambda arg-x req opt body)
       (let loop ([req req])
         (match req
           [(? null? req)
            `(let ([,opt ,arg-x]) ,(desugar body))]
           [_ 
            `(let ([,(car req) (car ,arg-x)]
                   [,arg-x (cdr ,arg-x)])
               ,(loop (cdr req)))])))

     `(λ ,arg-x
        (if (< ,(length req) (length '(,arg-x)))
            (raise "invalid parameter list!")
            ,(simplify-lambda arg-x req opt body)))]

    

    ; for define
    #;[`(,(? λ-or-lambda?) ,args . ,body)
       `(λ ,args ,(desugar body))]
    

    [`(pushPrompt ,ea ,eb)
     `(pushPrompt ,(desugar ea) ,(desugar eb))]
    
    [`(withSubCont ,ea ,ef)
     `(withSubCont ,(desugar ea) ,(desugar ef))]

    [`(pushSubCont ,eseq ,eb)
     `(pushSubCont ,(desugar eseq) ,(desugar eb))]
    
    [`(and) #t]
    [`(and ,e0) (desugar e0)]
    [`(and ,e0 ,es ...)
     `(if ,(desugar e0)
          ,(desugar `(and ,@es))
          #f)]
      
    [`(or) #f]
    [`(or ,e0) (desugar e0)]      
    [`(or ,e0 ,es ...)
     (define temp (gensym 'or))
     (desugar `(let ([,temp ,e0])
                 (if ,temp ,temp (or ,@es))))]

    [`(not ,exp)
     `(if ,(desugar exp) #f #t)]

    [`(if ,grd ,texp ,fexp)
     `(if ,(desugar grd)
          ,(desugar texp)
          ,(desugar fexp))]
    

    [`(cond) '(void)]
    [`(cond [else ,e0] ,eb ...) (desugar e0)]
    [`(cond [,e0 ,e1] ,es ...)
     `(if ,(desugar e0)
          ,(desugar e1)
          ,(desugar `(cond ,@es)))]

    [`(apply ,e0 ,e1)
     `(apply ,(desugar e0) ,(desugar e1))]
    
    
    [`(quasiquote ,exp)
     (desugar-qq 1 exp)]
    
    
   
    [`(quote . ,datum) exp]
    [(or (? number?) (? boolean?) (? string?) `(void)) exp]

    
    [`(,ef ,ea-list ...)
     (cons (desugar ef) (map desugar ea-list))]
    
    [else (raise `(error ,(format "Unknown S-expression: ~a" exp)))]))

;(desugar '(equal? 2 4))
;(desugar '(+ 1 2 3))
;(desugar '(foldl + 0 '(1 2 3)))
;(desugar '(apply + (list 1 3 4)))
;(desugar '(apply (lambda (a b c) b) (list 1 (list 5 6) 4)))
;(desugar '(apply + (let* ([a 3] [b (* 2 a)]) (list a b))))
;(desugar '(+ 2 4))
;(desugar '(let* ([a 3] [b (* 2 a)]) (cons a b)))
#;(desugar '(let ([a '2]
                  [b '3])
              (let ([a b]
                    [b a])
                (+ a b))))