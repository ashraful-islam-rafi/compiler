#lang racket

(define Ycomb ((λ (x) (x x))
               (λ (g) (λ (f)
                        (f (λ vs
                             (apply ((g g) f) vs)))))))

;(define halt (void))

#;(let ((f
         (Ycomb
          (λ (f)
            (λ (n)
              (let ((t1024937 (= n 0)))
                (if t1024937
                    1
                    (let ((t1024938 (- n 1)))
                      (let ((t1024939 (f t1024938)))
                        (* n t1024939))))))))))
    (f 5))

