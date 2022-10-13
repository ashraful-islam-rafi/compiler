#lang racket

(provide default-prims prims? builtins Ycomb)

(define default-prims '(* + - / expt = > < car cdr cons list equal? null? odd? even? positive? negative?))
;(define default-prims '(* +)); - / expt = car cdr cons list equal? null? odd? even? positive? negative?))


(define builtins
  `(
    (Ycomb ((λ (x) (x x))
            (λ (g) (λ (f)
                     (f (λ vs
                          (apply ((g g) f) vs)))))))
    
    (append*
     (λ (lhs rhs)
       (if (null? lhs)
           rhs
           (cons (first lhs)
                 (append* (rest lhs) rhs)))))

    (map1
     (λ (op lst) 
       (if (null? lst)
           null
           (cons (op (car lst))
                 (map1 op (cdr lst))))))
    (map
     (λ (op lst1 . list-of-lists)
       (let ([combined_lst (cons lst1 list-of-lists)])
         (if (null? (car combined_lst))
             null
             (cons (apply op (map1 car combined_lst))
                   (apply map op (map1 cdr combined_lst)))))))
    
    (ormap
     (λ (op . lst)
       (let loop ([lst lst]) 
         (cond [(or (null? lst)
                    (null? (car lst)))
                false]

               [(= 0 (length (cdar lst)))
                (apply op (map car lst))] 
            
               [(equal? false (not (apply op (map car lst))))
                (apply op (map car lst))] 
          
               [else
                (loop (map cdr lst))]))))
    
    (andmap
     (λ (op . lst)
       (let loop ([lst lst])
         (cond [(or (null? lst)
                    (null? (car lst)))
                true]
              
               [(= 0 (length (cdar lst)))
                (apply op (map car lst))]
          
               [(equal? false (apply op (map car lst))) 
                false] 
          
               [else
                (loop (map cdr lst))]))))

    (foldr
     (λ (f acc . lsts) 
       (if (ormap null? lsts)
           acc
           (let* ([xs (map car lsts)]
                  [rsts (map cdr lsts)]
                  [acc+ (apply foldr `(,f ,acc ,@rsts))]
                  )
             (apply f (append* xs `(,acc+)))))))
    
    (foldl
     (λ (f acc . lsts)
       (if (ormap null? lsts)
           acc
           (let* ([xs (map car lsts)]
                  [rsts (map cdr lsts)]
                  [acc+ (apply f (append* xs `(,acc)))])
             (apply foldl `(,f ,acc+ ,@rsts))))))
    
    (reverse
     (λ (lst)
       (if (null? lst) 
           lst
           (append* (reverse (cdr lst)) `(,(car lst))))))
    
    
    (append
     (λ (xs . x)
       (foldl append* null (reverse (append* `(,xs) x)))))

    (filter
     (λ (op lst)
       (cond [(null? lst) null]
             [(op (car lst))
              (cons (car lst) (filter op (cdr lst)))]
             [else (filter op (cdr lst))])))
    
    ))
  
(define (prims? op)
  (if (member op default-prims)
      #t
      #f))


;; builtin function implementations
(define Ycomb `((λ (x) (x x))
                (λ (g) (λ (f)
                         (f (λ vs
                              (apply ((g g) f) vs)))))))

(define Ycomb2 ((λ (x) (x x))
                (λ (g) (λ (f)
                         (f (λ vs
                              (apply ((g g) f) vs)))))))



(define map
  (λ (op lst) 
    (if (null? lst)
        null
        (cons (op (car lst))
              (map op (cdr lst))))))

(define append*
  (λ (lhs rhs)
    (if (null? lhs)
        rhs
        (cons (first lhs)
              (append* (rest lhs) rhs)))))


(define ormap
  (λ (op . lst)
    (let loop ([lst lst]) 
      (cond [(or (null? lst)
                 (null? (car lst)))
             false]

            [(= 0 (length (cdar lst)))
             (apply op (map car lst))] 
            
            [(equal? false (not (apply op (map car lst))))
             (apply op (map car lst))] 
          
            [else
             (loop (map cdr lst))]))))

(define andmap
  (λ (op . lst)
    (let loop ([lst lst])
      (cond [(or (null? lst)
                 (null? (car lst)))
             true]
              
            [(= 0 (length (cdar lst)))
             (apply op (map car lst))]
          
            [(equal? false (apply op (map car lst))) 
             false] 
          
            [else
             (loop (map cdr lst))]))))



(define reverse
  (λ (lst)
    (if (null? lst) 
        lst
        (append* (reverse (cdr lst)) `(,(car lst))))))

(define append
  (λ (xs . x)
    (foldl append* null (reverse (append* `(,xs) x)))))

(define append3
  (λ (xs . x)
    (foldl (λ (lst acc)
             (append* acc lst)) '() (append* `(,xs) x))))

(define filter
  (λ (op lst)
    (cond [(null? lst) null]
          [(op (car lst))
           (cons (car lst) (filter op (cdr lst)))]
          [else (filter op (cdr lst))])))



#;(letrec ([foldl (lambda (f acc . lsts)
                    (if (ormap null? lsts)
                        acc
                        (let* ([xs (map car lsts)]
                               [rsts (map cdr lsts)]
                               [acc+ (apply f (append* xs `(,acc)))]
                               )
                          (apply foldl `(,f ,acc+ ,@rsts)))))])
    (foldl append*
           null
           '(((3 4) (1 2)))))

#;(letrec ([foldr (lambda (f acc . lsts) 
                    (if (ormap null? lsts)
                        acc
                        (let* ([xs (map car lsts)]
                               [rsts (map cdr lsts)]
                               [acc+ (apply foldr `(,f ,acc ,@rsts))]
                               )
                          (apply f (append xs `(,acc+))))))])
    (foldr (lambda (x y acc)
             (+ acc (* x y)))
           0
           '(1 2 3 4)
           '(1 2 3 4)))
#;(define map
    (λ (op lst) 
      (if (null? lst)
          null
          (cons (op (car lst))
                (map op (cdr lst))))))

;(ormap + '(1 2 3) '(4 5 6) '(5 6 4) '(5 6 4))

#;(let ([foldl
         (Ycomb
          (λ (foldl)
            (lambda (f acc . lsts)
              (if (ormap null? lsts)
                  acc
                  (let* ([xs (map car lsts)]
                         [rsts (map cdr lsts)]
                         [acc+ (apply f (append* xs `(,acc)))]
                         )
                    (apply foldl `(,f ,acc+ ,@rsts)))))))])
    (foldl append*
           null
           '(((3 4) (1 2)))))

#;(let ((reverse
         (Ycomb
          (λ (reverse)
            (λ (lst) (if (null? lst) lst (append* (reverse (cdr lst)) `(,(car lst)))))))))
    (reverse (list 1 2 3)))



#;(let ((ormap
       (Ycomb2
        (λ (ormap)
          (λ (op . lst)
            (let loop ((lst lst))
              (let ((t981578
                     (let ((or981558 (null? lst)))
                       (if or981558 or981558 (let ((t981577 (car lst))) (null? t981577))))))
                (if t981578
                    false
                    (let ((t981579 (cdar lst)))
                      (let ((t981580 (length t981579)))
                        (let ((t981581 (= 0 t981580)))
                          (if t981581
                              (let ((t981582 (map car lst))) (apply op t981582))
                              (let ((t981583 (map car lst)))
                                (let ((t981584 (apply op t981583)))
                                  (let ((t981585 (if t981584 #f #t)))
                                    (let ((t981586 (equal? false t981585)))
                                      (if t981586
                                          (let ((t981587 (map car lst))) (apply op t981587))
                                          (let ((t981588 (map cdr lst)))
                                            (loop t981588)))))))))))))))))))
  (ormap + '(1 2 3) '(4 5 6) '(7 8 9)))