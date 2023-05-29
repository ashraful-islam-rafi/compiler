#lang racket

(require "cekm.rkt"
         "parser.rkt"
         "desugar.rkt"
         "anf-convert.rkt"
         "cps-convert.rkt"
         "closure-convert.rkt"
         "emit-cpp.rkt"
         )

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
   ;"(((call/cc (λ (x) ((x x) x))) (λ (y) y)) #t)"
   #;"(call/cc
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

   #;"{let {[x #t]}
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

   "((λ (p)
       (pushPrompt p
                   (+ 1
                      (withSubCont p (λ (k) (+ 2 1))))))
     (newPrompt))"

   "(+ 2 
       (let ([p (newPrompt)])
         (pushPrompt p
                     (+ 1 (withSubCont p
                                       (λ (k) 2))))))"
   "((λ (p)
          (+ 2
             (pushPrompt p
                         (if (withSubCont p
                                          (λ (k)
                                            (+ (pushSubCont k #f)
                                               (pushSubCont k #t))))
                             3
                             4))))
        (newPrompt))"

   "(and #t #t (if 4 #f #t))"
   "(or #f #f (or #f 5))"
   "(quote ())"
   "(quote 123)"
   "(quote apple)"
   "(cond [else 5])"
   "(cond
         [(equal? 2 4)]
         [(equal? 3 3)]
         [(equal? 1 1)])"

   "(cond
         [(equal? 2 1) (quote equal)]
         [else (quote CondElse)])"

   "(let ([a 10]
          [b 12])
      (cond [(> a b) (quote greater)]
            [(= a b) (quote equal)]
            [else (quote smaller)]))"

   "(cond [(cons 2 3) => (lambda (l) l)])"

   ))



;;;;;;; Runs cases
#;(for-each (λ (x)
              (displayln (~a "case               : " x
                             "\noutput             : " (cekm-interp (parse (open-input-string x)))
                             "\noutput-with-desugar: " (cekm-interp (desugar (parse (open-input-string x))))
                             "\n")))
            test-cases)




;;;;;;; New test cases
(define test-cases2
  (list
   ; '() ;; surprisingly this program fails!!!! fix this!
   '(+ 2 (* 3 2))
   '(+ (if 1 2 #f) 2)
   '(list 2 3 (list 4 5) 6)
   '(if (= 2 (length (list 1 4)))  #t #f)
   '(= 3 4)
   '(= 4 4)
   '(> 3 4)
   '(< 3 4)
   '(<= 3 3)
   '(<= 3 2)
   '(>= 3 4)
   '(>= 4 4)

   '(eq? 200 200)
   '(equal? 200 200)
   '(equal? 2 2.0)
   '(length (list 1 4))
   '(null? '(1 2 3))
   '(null? '())
   '(odd? 1)
   '(odd? 2)
   '(even? 2)
   '(even? 21)
   '(positive? 500)
   '(positive? -500)
   '(negative? 500)
   '(negative? -500)

   '(not #t)
   '(not #f)

   '(and)
   '(and #t #t (if 4 #f #t))
   '(or #f #f (or #f 5))

   '(let ([a '2]
          [b '3])
      (let ([a b]
            [b a])
        (+ a b)))

   '(let ([a 6])
      (let ([d 2])
        (let ([e 3])
          (let ([c (λ (x) (+ x a d))])
            (let ([f (λ (b) (+ e d a b))])
              (f a))))))

   '(let ([a '6])
      (let ([d '2])
        (let ([e '3])
          (let ([c (λ (x) (+ x a d))])
            (let ([f (λ (b) (+ e d a b))])
              (f a))))))

   '(let* ([a 3] [b (* 2 a)]) (cons a b))
   '(let ([x #f] [f (lambda (b) (not b))]) (+ (if (f x) 0 1) 2))
   '(letrec ([fact (lambda (n) (if (= n 0) 1 (* n (fact (- n 1)))))]) (fact 5))

   ;'(pushPrompt (newPrompt) (+ 3 4))

   '(apply + (list 1 3 4))
   '(apply (lambda (a b c) b) (list 1 2 3))
   '(apply + (let* ([a 3] [b (* 2 a)]) (list a b)))

   '(append1 (list 1 2) (list 3 4))
   '(map1 (lambda (x) (+ 1 x)) (list 1 2))
   '(reverse (list 1 2 3))
   '(filter even? (list 1 2 3 4))
   '(((call/cc (λ (x) ((x x) x))) (λ (y) y)) #t)
   '(call/cc
     (λ (top)
       (let ((cc (call/cc (λ (cc) (cc cc)))))
         (if (call/cc (λ (k) (if (cc (lambda (x) (top #f))) (k #f) (k #f))))
             #t
             #t))))

   '(car (list 2 3 4))
   '(cdr (list 2 3 4))
   '(cons 1 2)
   '(cons 1 (cons 2 (cons 3 '())))


   '(append (list 1 2) (list 3 4) (list 5 7))
   '(foldl + 0 (list 1 2 3))
   '(foldr + 0 (list 1 2 3))
   '(map + (list 1 2) (list 1 2) (list 1 2))
   '(ormap eq? (list 1 2) (list 1 2))
   '(andmap + (list 1 2 3) (list 4 5 6))

   ))


(define (compile e)
  (cps-convert (anf-convert (desugar (add-prims-to-prog e)))))


;;;;;;; Run cases
#;(for-each
   (λ (prog)
     ;  (define prog+ (compile prog))
     (displayln (~a
                 "case        : " prog
                 ;  "\noutput      : " (cekm-interp prog)
                 ;  "\nwith-prims  : " (cekm-interp (add-prims-to-prog prog))
                 ;  "\nwith-desugar: " (cekm-interp (desugar (add-prims-to-prog prog)))
                 "\nafter-anf   : " (cekm-interp (anf-convert (desugar (add-prims-to-prog prog))))
                 "\nafter-cps   : " (cekm-interp (cps-convert (anf-convert (desugar (add-prims-to-prog prog)))))
                 "\n")))
   test-cases2)



;;;;;;; Run to see Final Output
; incomplete
; how do I run each case, which generates a cpp file, runs it,
; and then print the output and move to the next case and repeat!!!
;==============================

(define test-cases-for-final-output
  (list
  ;  '(+ 1 2 3 (- 5 (- 4 1)) 10 (+ 1 4))
   '(+ 1 2)
  ;  '(* 2 3 (+ 3 2) (cons 1 2) (- 4 1))
  ;  '(* 3)
  ;  '(- 5)

  ;  '(+ (if 100 2 #f) 2)
  ;  '(if "asdfa" 2 #f)
  ;  '(if (negative? 500)
  ;       2
  ;       (if (positive? 100)
  ;           (if (even? 3)
  ;               "laye3-true"
  ;               "layer3-false")
  ;           "layer2-false"))
  ;  '(cons 1 2)
  ;  '(cons 1 2 3)
  ;  '(car '((2 3) (4 5)))
  ;  '(cdr '((2 3) (4 5)))
  ;  '(cdr 1)
  ;  '(cons (cons 1 2) 30000)
  ;  '(cons (cons 1 2) 30000)
  ;  '(car (cons (cons 1 2) (cons 30000 '())))
  ;  '(car (cdr (cdr '((2 3) (4 5) 6)))) ;=> 6
  ;  '(cdr (car (list (list 1) (list 1)))) ; => '()
  ;  '(cdar (list (list 1) (list 1))) ; => '()

  ;  '(null? '(1 2 3))
  ;  '(null? '())
  ;  '(eq? 200 100)
  ;  '(eq? (* 6 7) 42)
  ;  '(equal? 200 100 20)
  ;  '(equal? (* 6 7) 42)
  ;  '(equal? 'yes 'no)
  ;  '(equal? "yes" "yes")

  ;  '(= 3 2)
  ;  '(= 4 4)
  ;  '(> 4 1)
  ;  '(> 4 5)
  ;  '(< 3 4)
  ;  '(< 4 4)
  ;  '(<= 3 3)
  ;  '(<= 3 2)
  ;  '(>= 3 4)
  ;  '(>= 4 4)

  ;  '(cons 1 (cons 2 (cons 3 (cons 4 '()))))
  ;  '(list 2 3 (list 4 (list 5 6) 7) 8)
  ;  '(length (list 1 2 30))
  ;  '(length (list))

  ;  '(odd? 1)
  ;  '(odd? 2)
  ;  '(even? 2)
  ;  '(even? 21)
  ;  '(positive? 500)
  ;  '(positive? -500)
  ;  '(negative? 500)
  ;  '(negative? -500)

  ;  '(if (= 2 1) #t #f)
  ;  '(if (= 2 2) #t #f)
  ;  '(+ (if 1 2 #f) 2)
  ;  '(if (= 2 (length (list 1 4)))  #t #f)

  ;  '(not #t)
  ;  '(not #f)
  ;  '(and)
  ;  '(and #t #t (if 4 #f #t))
  ;  '(or #f #f (or #f 5))

  ;  '(let ([a '6])
  ;     (let ([d '2])
  ;       (let ([e '3])
  ;         (let ([c (λ (x) (+ x a d))])
  ;           (let ([f (λ (a b) (c (c (+ e d a b))))])
  ;             (f 4 5))))))

  ;  '(let* ([a 3] [b (* 2 a)]) (cons a b))
  ;  '(letrec ([fact (lambda (n) (if (= n 0) 1 (* n (fact (- n 1)))))]) (fact 5))

  ;  '(((call/cc (λ (x) ((x x) x))) (λ (y) y)) #t)
  ;  '(call/cc
  ;    (λ (top)
  ;      (let ((cc (call/cc (λ (cc) (cc cc)))))
  ;        (if (call/cc (λ (k) (if (cc (lambda (x) (top #f))) (k #f) (k #f))))
  ;            #t
  ;            #t))))


  ;  '(filter even? (list 1 2 3 4))
  ;  '(reverse (list 1 2 3))

  ;  '(append1 (list 1 2) (list 3 4))
  ;  '(append (list 1 2) (list 3 4) (list 5 7))

  ;  '(foldl + 0 (list 1 2 3))
  ;  '(foldr + 0 (list 1 2 3))
  ;  '(map1 (lambda (x) (+ 1 x)) (list 1 2))
  ;  '(map + (list 1 2) (list 1 2) (list 1 2))
  ;  '(ormap eq? (list 1 2) (list 1 2))
  ;  '(andmap + (list 1 2 3) (list 4 5 6))

  ;  '(apply + ((lambda x x) 2 3))
  ;  '(apply + (list 1 3 4))
  ;  '(apply (lambda (a b c) b) (list 1 2 3))
  ;  '(apply + (let* ([a 3] [b (* 2 a)]) (list a b)))
  ;  '(apply + (cons 1 (cons 2 (cons 3 (cons 4 '())))))

   ))

;;;;;;; Run cases for c++ emission
(for-each

 (λ (prog)
   (define prog+ (closure-convert (cps-convert (anf-convert (desugar (add-prims-to-prog prog))))))
   (pretty-print prog+)
   (displayln (~a
               "case        : " prog
               "\noutput      : " (emit-cpp prog+)
               "\n")))

 test-cases-for-final-output)




;;;;;;; Run to see Desugared Expression
;'=================Run-to-see-Desugared-Expression============
#;(for-each (λ (x)
              (displayln (~a "case  : " x "\noutput: " (desugar (parse (open-input-string x))) "\n")))
            test-cases)



;;;;;;; test-cases
#;(define test-cases-with-desugar
    (list
     '(+ 2 (+ 1 {* 2 3} (- 10 6)) (+ 1 4) 5.5 2)
     '(+ 2 3.5 (expt 2 1) 2.5 3)
     '(let ((x 5) (y 7) (z 9))
        (let ((y x) (x y))
          (let ((z (- z y)))
            (+ x y z))))

     '(let* ([a 3] [b (* 2 a)]) (cons a b))
     '(- (- (/ (* (* (+ 1 2) 2) 6) 2) (expt 2 (expt 2 3))) 1)
     ;"(((call/cc (λ (x) ((x x) x))) (λ (y) y)) #t)"
     #;"(call/cc
                 (λ (top)
                   (let ((cc (call/cc (λ (cc) (cc cc)))))
                     (if (call/cc (λ (k) (if (cc (lambda (x) (top false))) (k false) (k false))))
                         true
                         true))))"

     '(and (not (and #t #f)) (and #t #t))
     '(let ((x #t))
        (let ((x false))
          (let ((y #f))
            (or x y))))

     '(((λ (f) (λ (x) (f x))) (λ (y) (+ y y))) (+ 1 20))
     '(+ 420 (* 2 (/ 3 3)))
     '((λ (x) x) (if #f 1 2))
     '(if #t #f #t)
     '((lambda (x) x) 1)
     '((lambda () 5))
     '((λ (a b c) b) 1 2 3)
     '((lambda x (cdr x)) 1 2 3)
     '(list 1 2 3 (list 4 5) 6)
     '((lambda a (cons 5 a)) 0 1 2 3 4)
     '(apply + (list 1 3 4))
     '(apply (lambda x (cdr x)) (list 1 3 4))
     '(apply (lambda (a b c) b) (list 1 (list 5 6) 4))

     '((λ (p)
         (pushPrompt p
                     (+ 1
                        (withSubCont p (λ (k) (+ 2 1))))))
       (newPrompt))

     '(+ 2
         (let ([p (newPrompt)])
           (pushPrompt p
                       (+ 1 (withSubCont p
                                         (λ (k) 2))))))
     '((λ (p)
         (+ 2
            (pushPrompt p
                        (if (withSubCont p
                                         (λ (k)
                                           (+ (pushSubCont k #f)
                                              (pushSubCont k #t))))
                            3
                            4))))
       (newPrompt))

     '(and #t #t (if 4 #f #t))
     '(or #f #f (or #f 5))
     '(quote (1 2 . (3)))
     '(quote ())
     '(quote "hello")
     '(quote 123)

     '(cond)
     '(cond [else 5])
     '(cond
        [(equal? 2 4)]
        [(equal? 3 3)]
        [(equal? 1 1)])
     '(cond
        [(equal? 2 1) (quote equal)]
        [else (quote CondElse)])
     '(let ([a 10];
            [b 12])
        (cond [(> a b) (quote greater)]
              [(= a b) (quote equal)]
              [else (quote smaller)]))
     '(cond [(cons 2 3) => (lambda (l) l)])



     ))





