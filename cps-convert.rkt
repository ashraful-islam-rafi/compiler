#lang racket

; Input language:

; <expr> ::= (λ (<var>) <expr>)
;         |  <var>
;         |  (<expr> <expr>)


; Output language:

; <aexp> ::= (λ (<var>*) <cexp>)
;         |  <var>

; <cexp> ::=  (<aexp> <aexp>*)

(define (T-c expr c)
  (displayln (~a "T-c: " expr "\n---"))
  (match expr
    [`(λ . ,_)     `(,c ,(M expr))]
    [ (? symbol?)  `(,c ,(M expr))]

    ;let continuation
    [`(let ([,lhs ,rhs]) ,body)
     (T-c rhs `(λ (,lhs) ,(T-c body c)))]
    
    ;apply
    
    [`(,f ,es ...)
     `(,(M f) ,c ,@(map M es))]))
     
(define (M expr)
  (displayln (~a "M: " expr "\n---"))
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
    [(? symbol?)  expr]
    [(? number?)  expr]))

     


;; Examples

;(M '(λ (x) y))
;(T-c '(λ (x) y) 'halt)
;(T-c '(add1 (f x)) 'halt)
;(T-c '(g a) 'halt)

(T-c '(let ([x ((λ (z) z) 2)]) x) 'halt)
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

