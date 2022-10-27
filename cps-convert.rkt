#lang racket

(define (T-c expr c)
  ;(displayln (~a "T-c: " expr "\nc: "c "\n---"))
  (match expr
    [`(λ . ,_)     `(,c ,(M expr))]
    [ (or (? symbol?) (? number?))  `(,c ,(M expr))]
    [`(quote ,datum) `(,c ',datum)]
    
    [`(apply-prim ,op ,args)
     (define prm (gensym 'prm))
     (T-c `(let ([,prm (apply-prim ,op ,args)]) ,prm) c)]
    
    [`(let ([,lhs (apply-prim ,op ,args)]) ,body)
     `(let ([,lhs (apply-prim ,op ,(M args))])
        ,(T-c body c))]

    [`(let ([,lhs (λ ,args ,prim-body)]) ,body)
     `(let ([,lhs ,(M `(λ ,args ,prim-body))])
        ,(T-c body c))]

    [`(let ([,lhs ,rhs]) ,body)
     (T-c rhs `(λ (,lhs) ,(T-c body c)))]

    [`(if ,grd ,texp ,fexp)
     `(if ,grd ,(T-c texp c) ,(T-c fexp c))]
    
    [`(apply ,e0 ,e1)
     (define lst (gensym 'lst))
     `(let ([,lst (cons ,c ,(M e1))])
        (apply ,(M e0) ,lst))]
    
    [`(,f ,es ...)
     `(,(M f) ,c ,@(map M es))]))
     
(define (M expr)
  ;(displayln (~a "M: " expr "\n---"))
  (match expr
    [`(λ (,var ...) ,body)
     (define $k (gensym 'kont))
     
     `(λ (,$k ,@var)
        ,(T-c body $k))]
    
    [`(λ ,var ,body)
     (define $k (gensym 'kont))

     `(λ ,var
        (let ([,$k (car ,var)])
          (let ([,var (cdr ,var)])
            ,(T-c body $k)
            )))]

    ;handle other atomic values
    [(or (? symbol?) (? number?) (? boolean?) (? string?) `(void)) expr]
    [`(quote ,datum) `',datum]))

     


;; Examples
;(M '(λ (x) y))
;(T-c '(λ (x) x) 'halt)
;(T-c '(g a) 'halt)

(T-c '(let ([x ((λ (z) z) 2)]) x) 'halt)

(T-c '(let ((positive? (λ args (apply-prim positive? args)))) '(1 2 3)) 'halt)

(T-c '(let ((f
             (Ycomb
              (λ (f)
                (λ (n)
                  (let ((t1024937 (= n 0)))
                    (if t1024937
                        1
                        (let ((t1024938 (- n 1)))
                          (let ((t1024939 (f t1024938)))
                            (* n t1024939))))))))))
        (f 5)) 'halt)


#;(T-c '(let ((f
               (((λ (x) (x x))
                 (λ (g)
                   (λ (f)
                     (f (λ vs (let ((t844029 (g g))) (let ((t844030 (t844029 f))) (apply t844030 vs))))))))
                (λ (f)
                  (λ (n)
                    (let ((t334983 (= n 0)))
                      (if t334983
                          1
                          (let ((t334984 (- n 1)))
                            (let ((t334985 (f t334984)))
                              (* n t334985))))))))))
          (f 5)) 'halt)


