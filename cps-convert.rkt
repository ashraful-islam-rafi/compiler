#lang racket
(require "desugar.rkt" "prims.rkt" "anf-convert.rkt")
(provide cps-convert)

(define (cps-convert prog)

  (define (T-c expr c)
    ;(displayln (~a "T-c: " expr "\nc: "c "\n---"))
    (match expr
      [`(λ . ,_) `(,c '() ,(M expr))]
      [ (or (? symbol?) (? number?) (? boolean?) (? string?))  `(,c '() ,(M expr))]
      [`(quote ,datum) `(,c '() ',datum)] ; or `',datum? probably not, right? as of now works!

      [`(apply-prim ,op ,args)
       (define prm (gensym 'prm))
       (T-c `(let ([,prm (apply-prim ,op ,args)]) ,prm) c)]


      [`(let ([,lhs (apply-prim ,op ,args)]) ,body)
       `(let ([,lhs (apply-prim ,op ,(M args))])
          ,(T-c body c))]

      [`(let ([,lhs (prim ,op ,(? symbol? args) ...)]) ,body)
       `(let ([,lhs (prim ,op ,@(map M args))])
          ,(T-c body c))]


      [`(let ([,lhs (λ ,args ,prim-body)]) ,body)
       `(let ([,lhs ,(M `(λ ,args ,prim-body))])
          ,(T-c body c))]

      [`(let ([,lhs ',val]) ,body)
       `(let ([,lhs ',val])
          ,(T-c body c))]

      ;continuation
      [`(let ([,lhs ,rhs]) ,e0)
       (define letk (gensym 'letk))
       (T-c rhs `(λ (,letk ,lhs) ,(T-c e0 c)))]

      [`(if ,grd ,texp ,fexp)
       `(if ,(M grd) ,(T-c texp c) ,(T-c fexp c))]

      [`(call/cc ,exp)
       `(,(M exp) ,c ,c)]

      [`(apply ,e0 ,e1)
       (define lst (gensym 'lst))
       `(let ([,lst (prim cons ,c ,(M e1))])
          (apply ,(M e0) ,lst))]

      [`(,f ,es ...)
       `(,(M f) ,c ,@(map M es))]))

  (define (M expr)
    ;(displayln (~a "M: " expr "\n---"))
    (match expr
      [`(λ (,var ...) ,body)
       (define $k (gensym 'kont))

       `(λ (,$k ,@var) ,(T-c body $k))]

      [`(λ ,var ,body)
       (define $k (gensym 'kkont))
       (define newarg (gensym var))

       ;to avoid name conflict during cpp emision
       `(λ ,newarg
          (let ([,$k (prim car ,newarg)])
            (let ([,var (prim cdr ,newarg)])
              ,(T-c body $k))))]

      ;handle other atomic values
      [(or (? symbol?) (? number?) (? boolean?) (? string?)) expr]
      [`(quote ,datum) `',datum]))

  (T-c prog 'halt))




;; Examples
;(M '(λ (x) y))

; (cps-convert '(let ([x ((λ (z) z) 2)]) x))

;(pretty-print (cps-convert (anf-convert (desugar (add-prims-to-prog '(((call/cc (λ (x) ((x x) x))) (λ (y) y)) #t))))) )

;(cps-convert '(let ((car (λ args (apply-prim car args)))) '(1 2 3)))

#;(pretty-print (cps-convert (anf-convert (desugar (add-prims-to-prog
                                                    '(let ([a 6])
                                                       (let ([d 2])
                                                         (let ([e 3])
                                                           (let ([c (λ (x) (+ x a d))])
                                                             (let ([f (λ (b) (+ e d a b))])
                                                               (f a)))))))))))
;(pretty-print (cps-convert (anf-convert (desugar (add-prims-to-prog '(null? (list 1 3)))))))
; (pretty-print (cps-convert (anf-convert (desugar (add-prims-to-prog '(+ 2 (* 3 2)))))))
;(pretty-print (anf-convert (desugar (add-prims-to-prog '(+ 2 3 5)))))
; (pretty-print (cps-convert (anf-convert (desugar (add-prims-to-prog '(+ '2 '3))))))
;(pretty-print (cps-convert (anf-convert (desugar '(+ 2 1)))))
;(cps-convert (anf-convert (desugar (add-prims-to-prog '(+ 2 (* 3 2))))))
;(cps-convert (anf-convert (desugar (add-prims-to-prog '(apply (λ (a b c) b) (list 1 (list 5 6) 4))))))
; (pretty-print (cps-convert (anf-convert (desugar (add-prims-to-prog '(map + (list 1 2)))))))
;(pretty-print (cps-convert (anf-convert (desugar (add-prims-to-prog '(map1 (lambda (x) (+ 1 x)) (list 1 2)))))))
; (pretty-print  (cps-convert '(let ((car (λ args (apply-prim car args))))
;                                  (let ((+ (λ args (apply-prim + args))))
;                                    (let ((Ycomb
;                                           ((λ (x) (x x))
;                                            (λ (g)
;                                              (λ (f)
;                                                (f
;                                                 (λ vs
;                                                   (let ((t6370 (g g)))
;                                                     (let ((t6371 (t6370 f)))
;                                                       (apply t6371 vs))))))))))

;                                      (+ 2 3 5))))))

(define example
  '(lambda (f)
     (lambda (z)
       (lambda (x)
         (f x z a)))))

; (pretty-print (cps-convert (anf-convert (desugar (add-prims-to-prog example)))))
; (pretty-print (cps-convert (anf-convert (desugar (add-prims-to-prog '(let ([x 42]) (+ x 10)))))))
; (pretty-print (cps-convert (anf-convert (desugar '(let ((f (λ (x) x))) ((f f) 3))))))

; (pretty-print (anf-convert (desugar '(let ((f (λ (x) x))) ((f f) 3)))))
; (pretty-print (cps-convert (anf-convert (desugar '(let ((f (λ (x) x))) ((f f) 3))))))
; (pretty-print (cps-convert (anf-convert (desugar (add-prims-to-prog '(let ((f (λ (x) x))) (let ((v (f f))) (v 3))))))))
; (pretty-print (anf-convert (desugar (add-prims-to-prog '(let ((f (λ (x) x))) (let ((v (f f))) (v 3)))))))
; (pretty-print (cps-convert `(let ((+ (λ args (apply-prim + args)))) '(let ((f (λ (x) x))) (let ((v (f f))) (v 3))))))
; (pretty-print (anf-convert `(λ param_lst1550
;                               (let ((* (car param_lst1550)) (param_lst1550 (cdr param_lst1550)))
;                                 (let ((lst2 (car param_lst1550)) (param_lst1550 (cdr param_lst1550)))
;                                   (let ((lst param_lst1550)) (apply-prim * lst)))))))

; (pretty-print (cps-convert (anf-convert `(λ param_lst1550
;                                            (let ((* (car param_lst1550)) (param_lst1550 (cdr param_lst1550)))
;                                              (let ((lst2 (car param_lst1550)) (param_lst1550 (cdr param_lst1550)))
;                                                (let ((lst param_lst1550)) (apply-prim * lst))))))))

; (pretty-print (cps-convert (anf-convert `(λ param_lst3041
;                                            (let ((- (car param_lst3041)) (param_lst3041 (cdr param_lst3041)))
;                                              (let ((lst param_lst3041)) (apply-prim - lst)))))))
