#lang racket

(require "cek.rkt" "parser.rkt")

;;;;;;; test-cases
(define test-cases
  (list
   "(+ 2 (+ 1 {* 2 3} (- 10 6)) (+ 1 4) 5.5 2)"
   "(+ 2 3.5 (expt 2 1) 2.5 3)"
   "(let ((x 5) (y 7) (z 9))
                       (let ((y x) (x y))
                         (let ((z (- z y)))
                           (+ x y z))))"

   "(let* ([a 3] [b (* 2 a)]) (cons a b))"
   "(- (- (/ (* (* (+ 1 2) 2) 6) 2) (expt 2 (expt 2 3))) 1)"
   "(call/cc
                 (λ (top)
                   (let ((cc (call/cc (λ (cc) (cc cc)))))
                     (if (call/cc (λ (k) (if (cc (lambda (x) (top false))) (k false) (k false))))
                         true
                         true))))"

   "(and (not (and #t #f)) (and #t #t))"
   "(let ((x #t))
                  (let ((x false))
                    (let ((y #f))
                      (or x y))))"

   "{let {[x #t]}
                  (let ([x #f])
                    {let ([y #f]}
                      (or x y)))}"

   "(((λ (f) (λ (x) (f x))) (λ (y) (+ y y))) (+ 1 20))"
   "(+ 420 (* 2 (/ 3 3)))"
   "((λ (x) x) (if #f 1 2))"
   "(if #t #f #t)"
   "((lambda (x) x) 1)"
   "((lambda () 5))"
   "((λ (a b c) b) 1 2 3)"
   "((lambda x (cdr x)) 1 2 3)"
   "(list 1 2 3 (list 4 5) 6)"
   "((lambda a (cons 5 a)) 0 1 2 3 4)"
   "(apply + (list 1 3 4))"
   "(apply (lambda x (cdr x)) (list 1 3 4))"
   "(apply (lambda (a b c) b) (list 1 (list 5 6) 4))"
   "(((call/cc (λ (x) ((x x) x))) (λ (y) y)) #t)"))

;;;;;;; Run cases
(for-each (λ (x)
            (displayln (~a "case  : " x "\noutput: " (cek-interp (parse (open-input-string x))) "\n")))
          test-cases)




