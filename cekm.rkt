#lang racket

(provide cek-interp)

(require "parser.rkt")

(require (rename-in racket/base (eval racket-eval)))
         
(define default-prims '(* + - / expt = car cdr cons equal? null?))

(define prims
  (foldl (lambda (op env)
           (hash-set env op `(clo (λ args (apply-prim ,op args)) #hash())))
         '#hash((list . (clo (λ x x) #hash())))
         default-prims))

(define (racket-apply proc lst)
  (apply proc lst))

(define (cek-interp prog)
  ; Helper function to check if symbol λ or tag lambda
  (define (λ-or-lambda? str)
    (match str
      [(or (== 'lambda) (== 'λ)) #t]
      [else #f]))
  
  (define (eval exp env kont meta-k)
    ;(displayln (~a "\n>>>eval : " (list '--exp: exp '--env: env '--kont: kont)))
    (match exp  
      [(or (? number?) (? boolean?))
       (ret exp kont meta-k)]

      [`(,(? λ-or-lambda?) ,args ,body)
       (ret `(clo ,exp ,env) kont meta-k)]
       
      [(? symbol? x)
       (ret (hash-ref env x
                      (λ () (raise `(error ,(format "Undefined variable: ~a" x)))))
            kont meta-k)] 

      [`(if ,grd, texp, fexp)
       (eval grd env `(ifk ,texp ,fexp ,env ,kont) meta-k)]


      [`(let ([,xs ,rhs] ...) ,body)
       (eval `((λ ,xs ,body) ,@rhs) env kont meta-k)]


      [`(apply ,e0 ,e1)
       (eval e0 env `(apply-ark ,e1 ,env ,kont) meta-k)]

      [`(apply-prim ,opr ,x)
       (ret (racket-apply (racket-eval opr (make-base-namespace)) (hash-ref env x)) kont meta-k)]
      
      [`(,ef ,ea-list ...)
       (eval ef env `(app-k () ,ea-list ,env ,kont) meta-k)]


      [else (raise `(Error occured in eval function!...State: ,exp ,env ,kont ,meta-k))]))
  
  (define (ret val kont meta-k)
    ;(displayln (~a ">>>ret  : " (list '--val: val '--kont: kont '--meta-k: meta-k)))
    (match kont
      ['mt val]

      [`(ifk ,texp ,fexp ,this_env ,this_kont)
       (if val
           (eval texp this_env this_kont meta-k)
           (eval fexp this_env this_kont meta-k))]

      [`(apply-ark ,ea ,env ,kont)
       (eval ea env `(apply-fnk ,val ,kont) meta-k)]

      [`(apply-fnk ,fv ,kont)
       (apply fv val kont meta-k)]

      [`(app-k ,v-list () ,env ,sub_kont)
       (define vals (append v-list `(,val)))
       (apply (car vals) (cdr vals) sub_kont meta-k)]
       
      [`(app-k ,v-list (,e0 ,e-list ...) ,env ,sub_kont)
       (eval e0 env `(app-k ,(append v-list `(,val)) ,e-list ,env ,sub_kont) meta-k)]
     
      [else (raise `(Error occured in ret function!...State: ,val ,kont ,meta-k))]))
  
  (define (apply vf va-list kont meta-k)
    ;(displayln (~a ">>>apply: " (list '--vf: vf '--va-list: va-list '--kont: kont)))
    ;(pretty-print vf)
    ;(pretty-print va-list)
    ;(pretty-print kont)
    (match vf
      [`(clo (,(? λ-or-lambda?) ,params ,eb) ,env)
       (if (symbol? params)
           (eval eb (hash-set env params va-list) kont meta-k)
           (if (= (length params) (length va-list))
               (eval eb
                     (foldl (lambda (x va env) (hash-set env x va)) env params va-list)
                     kont meta-k)
               (raise `(Error number of arguments do not match))))]

      [else (raise `(Error occured in apply function!...State: ,vf ,va-list ,kont ,meta-k))]))
  
  (eval prog prims 'mt 'ye))

; test interpreter
;(cek-interp '(+ 420 (* 2 (/ 3 3))))
