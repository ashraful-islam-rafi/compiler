#lang racket
(provide desugar add-prims-to-prog)

(require "cekm.rkt" "prims.rkt")   ; maybe change to prims.rkt ?

; Helper function to check if symbol λ or tag lambda
(define (λ-or-lambda? str)
  (match str
    [(or (== 'lambda) (== 'λ)) #t]
    [else #f]))

(define (add-prims-to-prog prog)
  (foldl (lambda (op acc)
           `(let ([,op (λ args (apply-prim ,op args))]) ,acc))
         prog
         default-prims))

(define (desugar exp)
  ;(displayln (~a "desugar-->: " exp))
  (match exp
    #;[`(quote ,datum)
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

    [`(pushPrompt ,ea ,eb)
     `(pushPrompt ,(desugar ea) ,(desugar eb))]
    
    [`(withSubCont ,ea ,ef)
     `(withSubCont ,(desugar ea) ,(desugar ef))]

    [`(pushSubCont ,eseq ,eb)
     `(pushSubCont ,(desugar eseq) ,(desugar eb))]
    
    
    [`(let ([,xs ,rhss] ...) ,body)
     ;(displayln (~a "xs: " xs "\nrhs: " rhss "\nbody: "body "\n---\n" ))
     `(let ,(map (lambda (x rhs) `(,x ,(desugar rhs))) xs rhss) ,(desugar body))]

    [`(let* () ,ebody) (desugar ebody)]
    [`(let* ([,lhs ,rhs] ,e-pairs ...) ,ebody)      
     (desugar `(let ([,lhs ,rhs])
                 (let* ,e-pairs ,ebody)))]
    
    [`(,(? λ-or-lambda?) ,args ,body)
     `(λ ,args ,(desugar body))]
    
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
     
    [(or (? number?) (? boolean?) (? symbol?) (? string?)) exp]
    [`(quote ,datum) `(quote ,datum)]

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