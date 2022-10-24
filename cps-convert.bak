#lang racket

; Input language:

; <expr> ::= (λ (<var>) <expr>)
;         |  <var>
;         |  (<expr> <expr>)


; Output language:

; <aexp> ::= (λ (<var>*) <cexp>)
;         |  <var>

; <cexp> ::=  (<aexp> <aexp>*)


(define (T-k expr k)
  (displayln (~a "T-k: " expr "\n---"))
  (match expr
    [`(λ . ,_)      (k (M expr))]
    [ (? symbol?)   (k (M expr))]
    
    [`(,f ,e)
     (define $rv (gensym '$rv))
     (define cont `(λ (,$rv) ,(k $rv)))
     (T-k f (λ ($f)
              (T-k e (λ ($e)
                       `(,$f ,$e ,cont)))))]))

(define (T-c expr c)
  (displayln (~a "T-c: " expr "\n---"))
  (match expr
    [`(λ . ,_)     `(,c ,(M expr))]
    [ (? symbol?)  `(,c ,(M expr))]

    [`(,f ,e)
     (T-k f (λ ($f)
              (T-k e (λ ($e)
                       `(,$f ,$e ,c)))))]))
     
(define (M expr)
  (displayln (~a "M: " expr "\n---"))
  (match expr
    [`(λ (,var) ,expr)
     (define $k (gensym '$k))
     `(λ (,$k ,var) ,(T-c expr $k))]
    
    [(? symbol?)  expr]))
     


;; Examples

;(M '(λ (x) y))
;(T-c '(λ (x) y) 'halt)
(T-c '(add1 (f x)) 'halt)
;(T-c '(g a) 'halt)

;(T-c '(let ([x ((λ (z) z) 'y)]) x) 'halt)
;(T-c '((λ (z) z) x) 'halt)

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


