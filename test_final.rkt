#lang racket

(require "desugar.rkt"
         "anf-convert.rkt"
         "cps-convert.rkt"
         "closure-convert.rkt"
         "emit-cpp.rkt"
         )

(define bin_file_name "cpp_program.out")
(define cpp_file_name "cpp_program.cpp")
(define cpp_folder_path "/mnt/6AFED73BFED6FE6F/mine/git-projects/compiler/cpp/")
(define cpp_file (format "~a~a" cpp_folder_path cpp_file_name))
(define bin_file (format "~a~a" cpp_folder_path bin_file_name))

;;;;;;; Run to see Final Output
; incomplete
; how do I run each case, which generates a cpp file, runs it,
; and then print the output and move to the next case and repeat!!!
;==============================

(define test-cases-for-final-output
  (list
   '(+ 1 2 3 (- 5 2) (+ 1 2))
   '(* 2 3 (+ 3 2) (- 4 1))
   '(* 3)
   '(- 5)

   '(+ (if 1 2 #f) 2)
   '(cons 1 2)
   '(car '((2 3) (4 5)))
   '(cdr '((2 3) (4 5)))
   '(car (cdr (cdr '((2 3) (4 5) 6)))) ;=> 6
   '(cdr (car (list (list 1) (list 1)))) ; => '()
   '(cdar (list (list 1) (list 1))) ; => '()

   '(null? '(1 2 3))
   '(null? '())
   '(eq? 200 100)
   '(eq? (* 6 7) 42)
   '(equal? 200 100)
   '(equal? (* 6 7) 42)
   '(equal? 'yes 'no)
   (equal? "yes" "yes")

   '(= 3 4)
   '(= 4 4)
   '(> 4 1)
   '(> 4 5)
   '(< 3 4)
   '(< 4 4)
   '(<= 3 3)
   '(<= 3 2)
   '(>= 3 4)
   '(>= 4 4)

   '(cons 1 (cons 2 (cons 3 (cons 4 '()))))
   '(list 2 3 (list 4 (list 5 6) 7) 8)
   '(length (list 1 2 30))
   '(length (list))

   '(odd? 1)
   '(odd? 2)
   '(even? 2)
   '(even? 21)
   '(positive? 500)
   '(positive? -500)
   '(negative? 500)
   '(negative? -500)

   '(if (= 2 1) #t #f)
   '(if (= 2 2) #t #f)
   '(+ (if 1 2 #f) 2)
   '(if (= 2 (length (list 1 4)))  #t #f)

   '(not #t)
   '(not #f)
   '(and)
   '(and #t #t (if 4 #f #t))
   '(or #f #f (or #f 5))

   '(let ([a '6])
      (let ([d '2])
        (let ([e '3])
          (let ([c (λ (x) (+ x a d))])
            (let ([f (λ (a b) (c (c (+ e d a b))))])
              (f 4 5))))))

   '(let* ([a 3] [b (* 2 a)]) (cons a b))
   '(letrec ([fact (lambda (n) (if (= n 0) 1 (* n (fact (- n 1)))))]) (fact 5))

   '(((call/cc (λ (x) ((x x) x))) (λ (y) y)) #t)
   '(call/cc
     (λ (top)
       (let ((cc (call/cc (λ (cc) (cc cc)))))
         (if (call/cc (λ (k) (if (cc (lambda (x) (top #f))) (k #f) (k #f))))
             #t
             #t))))


   '(filter even? (list 1 2 3 4))
   '(reverse (list 1 2 3))

   '(append1 (list 1 2) (list 3 4))
   '(append (list 1 2) (list 3 4) (list 5 7))

   '(foldl + 0 (list 1 2 3))
   '(foldr + 0 (list 1 2 3))
   '(map1 (lambda (x) (+ 1 x)) (list 1 2))
   '(map + (list 1 2) (list 1 2) (list 1 2))
   '(ormap eq? (list 1 2) (list 1 2))
   '(andmap + (list 1 2 3) (list 4 5 6))

   '(apply + ((lambda x x) 2 3))
   '(apply + (list 1 3 4))
   '(apply (lambda (a b c) b) (list 1 2 3))
   '(apply + (let* ([a 3] [b (* 2 a)]) (list a b)))
   '(apply + (cons 1 (cons 2 (cons 3 (cons 4 '())))))

   ))

;; Run all the test cases to emit c++, 
;; then executes the binary and prints out the final output
(for-each

 (λ (prog)
   (define prog+ (closure-convert (cps-convert (anf-convert (desugar (add-prims-to-prog prog))))))
   ;  (pretty-print prog+)

   (define (execute-prog+ prog+)
     ; generating the cpp_program.cpp file
     (emit-cpp prog+)

     (cond
       [(system (format "~a ~a ~a ~a" "g++" cpp_file "-o" bin_file))
        ;; compilation successful, now let's execute the binary file and print the output
        (define-values (sp out in err) (subprocess #f #f #f (format "./cpp/~a" bin_file_name)))
        
        ;; printing final output
        (displayln (port->string out))

        ;; closing all the ports
        (close-input-port out)
        (close-output-port in)
        (close-input-port err)

        ;; wait till the process terminates
        (subprocess-wait sp)]

       [else (raise `(Error: could not create and execute the binary file!))]))

   (displayln (~a "case   : " prog))
   (display "output :")
   (execute-prog+ prog+)
   )

 test-cases-for-final-output)