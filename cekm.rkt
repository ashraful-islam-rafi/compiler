#lang racket

(provide cekm-interp)

(require "parser.rkt")
;(cemk-interp (desugar (parse ...)))
(require (rename-in racket/base (eval racket-eval)))
         
(define default-prims '(* + - / expt = > < car cdr cons equal? null?))
;(define default-prims '(+ = equal?)); - / expt = car cdr cons equal? null?))

(define prims
  (foldl (lambda (op env)
           (hash-set env op `(clo (λ args (apply-prim ,op args)) #hash())))
         '#hash((list . (clo (λ x x) #hash())))
         default-prims))

(define (racket-apply proc lst)
  (apply proc lst))

(define (cekm-interp prog)
  ; Helper function to check if symbol λ or tag lambda
  (define (λ-or-lambda? str)
    (match str
      [(or (== 'lambda) (== 'λ)) #t]
      [else #f]))
  
  (define (eval exp env kont m-kont)
    ;(displayln (~a "\n>>>eval : " (list '--exp: exp '--env: env '--kont: kont)))
    (match exp  
      [(or (? number?) (? boolean?) (? string?)
           (? null?))
       (ret exp kont m-kont)]
      
      [`(quote ,datum)
       (let loop ([temp_datum datum])
         (match temp_datum
           ;[(? null?) (ret temp_datum kont m-kont)]
           ;[(? symbol?) (ret temp_datum kont m-kont)]
           [(or (? number?) (? boolean?)
                (? string?) (? symbol?) (? null?))
            (ret temp_datum kont m-kont)]
           [(? pair?) (eval `(cons ,(loop (car temp_datum))
                                   ,(loop (cdr temp_datum)))
                            env kont m-kont)]
           [else
            (raise `(error ,(format "Unknown quote format: ~a" temp_datum)))]))]
      
      [`(,(? λ-or-lambda?) ,args ,body)
       (ret `(clo ,exp ,env) kont m-kont)]
       
      [(? symbol? x)
       (ret (hash-ref env x
                      (λ () (raise `(error ,(format "Undefined variable: ~a" x)))))
            kont m-kont)] 

      [`(if ,grd, texp, fexp)
       (eval grd env `(ifk ,texp ,fexp ,env ,kont) m-kont)]

      [`(and) (ret #t kont m-kont)]
      [`(and ,e0) (eval e0 env kont m-kont)]
      [`(and ,e0 ,es ...)
       (eval `(if ,e0 (and ,@es) #f)
             env kont m-kont)]
      
      [`(or) (ret #f kont m-kont)]
      [`(or ,e0) (eval e0 env kont m-kont)]      
      [`(or ,e0 ,es ...)
       (define temp (gensym 'or))
       (eval `(let ([,temp ,e0])
                (if ,temp ,temp (or ,@es)))
             env kont m-kont)]

      [`(not ,exp)
       (eval `(if ,exp #f #t) env kont m-kont)]

      [`(cond) (ret (void) kont m-kont)]
      [`(cond [else ,e0] ,eb ...)
       (eval e0 env kont m-kont)]

      [`(cond [,e0] ,es ...)
       (define temp (gensym 'cond))
       (eval `(let ([,temp ,e0])
                (if ,temp
                    ,temp
                    (cond ,@es)))
             env kont m-kont)]
      
      [`(cond [,e0 ,e1] ,es ...)
       (eval `(if ,e0 ,e1 (cond ,@es)) env kont m-kont)]

      [`(cond [,te => ,pe] ,es ...)
       (define temp (gensym 'cond))
       (eval `(let ([,temp ,te])
                (if ,temp
                    (,pe ,temp)
                    (cond ,@es)))
             env kont m-kont)]
      

      [`(let ([,xs ,rhs] ...) ,body)
       (eval `((λ ,xs ,body) ,@rhs) env kont m-kont)]

      [`(let* () ,ebody) (eval ebody env kont m-kont)]
      [`(let* ([,lhs ,rhs] ,e-pairs ...) ,ebody)      
       (eval `(let ([,lhs ,rhs]) (let* ,e-pairs ,ebody)) env kont m-kont)]


      [`(newPrompt)
       (ret `(prompt ,(gensym 'prompt)) kont m-kont)]

      [`(pushPrompt ,ea ,eb)
       (eval ea env `(pushPromptk ,eb ,env ,kont) m-kont)]

      [`(withSubCont ,ea ,ef)
       (eval ea env `(withSubContκ () ,ef ,env ,kont) m-kont)]

      [`(pushSubCont ,eseq ,eb)
       (eval eseq env `(pushSubContκ ,eb ,env ,kont) m-kont)]


      
      [`(apply ,e0 ,e1)
       (eval e0 env `(apply-ark ,e1 ,env ,kont) m-kont)]

      [`(apply-prim ,opr ,x)
       (ret (racket-apply (racket-eval opr (make-base-namespace)) (hash-ref env x)) kont m-kont)]
      
      [`(,ef ,ea-list ...)
       (eval ef env `(app-k () ,ea-list ,env ,kont) m-kont)]


      [else (raise `(Error occured in eval function!...State: ,exp ,env ,kont ,m-kont))]))

  (define (split-k kont prompt)
    (let loop ([Kup `()]
               [Klatest kont])
      (cond [(equal? Klatest `())
             (raise (format "Prompt -- ~a -- not found!" prompt))]
            [(equal? (car Klatest) prompt)
             (cons (reverse Kup) (cdr Klatest))]
            [else
             (loop (cons (car Klatest) Kup) (cdr Klatest))])))
    
  (define (ret val kont m-kont)
    ;(displayln (~a ">>>ret  : " (list '--val: val '--kont: kont '--m-kont: m-kont)))
    (match kont
      [`mt
       (match m-kont
         ['() val]
         [`(,k . ,mk)
          (ret val k mk)])]

      [`(ifk ,texp ,fexp ,env ,kont)
       (if val
           (eval texp env kont m-kont)
           (eval fexp env kont m-kont))]
      

      [`(pushPromptk ,eb ,env ,kont)
       (eval eb env 'mt (cons val (cons kont m-kont)))]

      [`(withSubContκ () ,ef ,env ,kont)
       (eval ef env `(withSubContκ ,val () ,env ,kont) m-kont)]

      [`(withSubContκ ,prmpt () ,env ,this_kont)
       (match-define (cons Kup Kdown) (split-k m-kont prmpt))
       (apply val (list `(kont ,(cons this_kont Kup))) 'mt Kdown)]

      [`(pushSubContκ ,eb ,env ,kont)
       (eval eb env 'mt (append (second val) (cons kont m-kont)))]
      

      [`(apply-ark ,ea ,env ,kont)
       (eval ea env `(apply-fnk ,val ,kont) m-kont)]

      [`(apply-fnk ,fv ,kont)
       (apply fv val kont m-kont)]

      [`(app-k ,v-list () ,env ,sub_kont)
       (define vals (append v-list `(,val)))
       (apply (car vals) (cdr vals) sub_kont m-kont)]
       
      [`(app-k ,v-list (,e0 ,e-list ...) ,env ,sub_kont)
       (eval e0 env `(app-k ,(append v-list `(,val)) ,e-list ,env ,sub_kont) m-kont)]
     
      [else (raise `(Error occured in ret function!...State: ,val ,kont ,m-kont))]))
  
  (define (apply vf va-list kont m-kont)
    ;(displayln (~a ">>>apply: " (list '--vf: vf '--va-list: va-list '--kont: kont '--m-kont: m-kont)))
    ;(pretty-print vf)
    ;(pretty-print va-list)
    ;(pretty-print kont)
    (match vf
      [`(clo (,(? λ-or-lambda?) ,params ,eb) ,env)
       (if (symbol? params)
           (eval eb (hash-set env params va-list) kont m-kont)
           (if (= (length params) (length va-list))
               (eval eb
                     (foldl (lambda (x va env) (hash-set env x va)) env params va-list)
                     kont m-kont)
               (raise `(Error number of arguments do not match))))]

      [else (raise `(Error occured in apply function!...State: ,vf ,va-list ,kont ,m-kont))]))
  
  (eval prog prims 'mt '()))

; test interpreter
;(cek-interp '(+ 420 2))

#;
(cek-interp '((λ (p)
                (pushPrompt p
                            (+ 1
                               (withSubCont p (λ (k) (+ 2 1))))))
              (newPrompt)))

#;(cekm-interp
   '(+ 2 
       (let ([p (newPrompt)])
         (pushPrompt p
                     (+ 1 (withSubCont p
                                       (λ (k) 2)))))))

#;(cek-interp '((λ (p)
                  (+ 2
                     (pushPrompt p
                                 (if (withSubCont p
                                                  (λ (k)
                                                    (+ (pushSubCont k #f)
                                                       (pushSubCont k #t))))
                                     3
                                     4))))
                (newPrompt)))

#;(cek-interp '(cond [else 5]))
#;(cek-interp '(cond
                 [(equal? 2 4)]
                 [(equal? 3 3)]
                 [(equal? 1 1)]))

#;(cek-interp '(cond
                 [(equal? 2 1) #t]
                 [(equal? 2 3) #f]
                 [else 'in-the-cond-else-block]))

;(cekm-interp '(cond [(cons 2 3) => (lambda (l) l)]))
;(cekm-interp '(if #t (if #t (if 4 #f #t) #f) #f))
;(cekm-interp '(+ 2 ((λ (p) (pushPrompt p (+ 1 (withSubCont p (λ (k) 2))))) (newPrompt))))