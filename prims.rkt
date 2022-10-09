#lang racket

(provide default-prims prims? builtins Ycomb)

(define default-prims '(* + - / expt = > < car cdr cons equal? null?))
;(define default-prims '(* +)); - / expt = car cdr cons equal? null?))

(define U `(λ (u) (u u)))
(define builtins
  `(
    (Ycomb (,U (λ (y)
                 (λ (f)
                   (f (λ (x)
                        (((,U y) f) x)))))))
    
    (append*
     (λ (lhs rhs)
       (if (null? lhs)
           rhs
           (cons (first lhs)
                 (append* (rest lhs) rhs)))))
    
    ;(map1 (λ (x) x))
    (map
     (λ (op lst) 
       (if (null? lst)
           null
           (cons (op (car lst))
                 (map op (cdr lst))))))
    
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
    
    ))
  
(define (prims? op)
  (if (member op default-prims)
      #t
      #f))


;; function implementations
(define Ycomb `(,U (λ (y)
                     (λ (f)
                       (f (λ (x)
                            (((,U y) f) x)))))))


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
  
