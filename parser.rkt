#lang racket

(provide parse)
(require "lexer.rkt")

(define (parse prog)
  (define (build-sexp-list lst)
    (let ([token (lex prog)])
      (begin
        ;(displayln (~a "token: " token))
        ;(displayln (~a "list-so-far: " lst))
        (cond
          [(null? token) lst]
          [else
           (match token
             [(or `(LP) `(LSB) `(LCB))
              (build-sexp-list (cons (build-sexp-list '()) lst))]
             
             [`(Sym ,symb) 
              (match symb
                [(or '+ '- '* '/ '^) (build-sexp-list (cons symb lst))]
                [_ (build-sexp-list (cons symb lst))]
                )]
             
             [`(Int ,num) 
              (build-sexp-list (cons num lst))]

             [`(Dec ,num) 
              (build-sexp-list (cons num lst))]

             [`(Bool ,kw) 
              (match kw
                ['true (build-sexp-list (cons true lst))]
                ['false (build-sexp-list (cons false lst))]
                ['|#t| (build-sexp-list (cons '#t lst))]
                ['|#f| (build-sexp-list (cons '#f lst))]
                )]
             
             [`(Special-kw ,keyword) 
              (build-sexp-list (cons keyword lst))]

             [`(Logical-op ,operator) 
              (match operator
                ['|>| (build-sexp-list (cons '> lst))]
                ['|>=| (build-sexp-list (cons '>= lst))]
                ['|<| (build-sexp-list (cons '< lst))]
                ['|<=| (build-sexp-list (cons '<= lst))]
                ['|=| (build-sexp-list (cons '= lst))]
                )]

             [`(Char ,chr)
              (build-sexp-list (cons chr lst))]
             
             [(or `(RP) `(RSB) `(RCB))
              (reverse lst)]

             [_ (build-sexp-list (cons token lst))])]))))
  
  (let [(next-token (lex prog))]
    (build-sexp-list '())))



;;;;;;; test-cases
(define case-0 "(+ 2 (+ 1 {* 2 3} (- 10 6)) (+ 1 4) 5.5 2)")
(define case-1 "(+ 2 3.5 (hello 2 1) 2.5 3)")
(define case-2 "(prompt ((lambda (k) (let ((x (k 1))
                                                (y (k 2)))
                                            (k (* x y)))) (lambda (x) (+ 1 x))))")
(define case-3 "(let ((x 5) (y 7) (z 9))
                       (let ((y x) (x y))
                         (let ((z (- z y)))
                           (+ x y z))))")

(define case-4 "(- (- (/ (* (* (+ 1 2) 2) 6) 2) (expt 2 (expt 2 3))) 1)")
(define case-5 "(call/cc
                 (λ (top)
                   (let ((cc (call/cc (λ (cc) (cc cc)))))
                     (if (call/cc (λ (k) (if (cc (lambda (x) (top false))) (k false) (k false))))
                         true
                         true))))")
(define case-6 "(and (not (and #t #f)) (and #t #t))")
(define case-7 "(let ((x #t))
                  (let ((x false))
                    (let ((y #f))
                      (or x y))))")

(define case-8 "{let {[x #t]}
                  (let ([x #f])
                    {let ([y #f]}
                      (or x y)))}")

(define case-9 "(((λ (f) (λ (x) (f x))) (λ (y) (+ y y))) (+ 1 20))")

(define case-10 "(+ 420 (* 2 (/ 3 3)))")
(define case-11 "((λ (x) x) (if #f 1 2))")
(define case-12 "(if #t #f #t)")
(define case-13 "((lambda (x) x) 1)")
(define case-14 "((lambda () 5))")
(define case-15 "((λ (a b c) b) 1 2 3)")
(define case-16 "((λ (q) (λ (b) q)) (λ (z) z))")
(define case-17 "((lambda x (cdr x)) 1 2 3)")
(define case-18 "(list 1 2 3 (list 4 5) 6)")
(define case-19 "((lambda a (cons 5 a)) 0 1 2 3 4)")
(define case-20 "(apply + (list 1 3 4))")
(define case-21 "(apply (lambda x (cdr x)) (list 1 3 4))")
(define case-22 "(apply (lambda (a b c) b) (list 1 (list 5 6) 4))")
(define case-23 "(((call/cc (λ (x) ((x x) x))) (λ (y) y)) #t)")
(define case-24 "(let* ([a 3] [b (* 2 a)]) (cons a b))")
(define case-25 "(and #t #t #t)")

;;;;;;; Run examples
#;
(begin
  (parse (open-input-string case-0))
  (parse (open-input-string case-1))
  (parse (open-input-string case-2))
  (parse (open-input-string case-3))
  (parse (open-input-string case-4))
  (parse (open-input-string case-5))
  (parse (open-input-string case-6))
  (parse (open-input-string case-7))
  (parse (open-input-string case-8))
  (parse (open-input-string case-10))
  (parse (open-input-string case-11))
  (parse (open-input-string case-12))
  (parse (open-input-string case-13))
  (parse (open-input-string case-14))
  (parse (open-input-string case-15))
  (parse (open-input-string case-16))
  (parse (open-input-string case-17))
  (parse (open-input-string case-18))
  (parse (open-input-string case-19))
  (parse (open-input-string case-20))
  (parse (open-input-string case-21))
  (parse (open-input-string case-22))
  (parse (open-input-string case-23))
  (parse (open-input-string case-24))
  )


;(eval (my-parser (my-lexer (open-input-string test-case-1))))
; lexer testing
;(define in (open-input-string case-8))
;(lex in)