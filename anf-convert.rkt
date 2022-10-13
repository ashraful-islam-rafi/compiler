#lang racket


(require "desugar.rkt" "prims.rkt")
(provide anf-convert)

; Helper function to check if symbol λ or tag lambda
(define (λ-or-lambda? str)
  (match str
    [(or (== 'lambda) (== 'λ)) #t]
    [else #f]))

; atomic values with no control/side effects
(define (Value? v)
  (match v
    [`(quote ,datum) #t]
    [(or '+ '- '* '/ '=) #t]
    [(or (? symbol?) (? number?) (? boolean?) (? string?) (? char?) ) #t]
    [else #f]))

(define (anf-convert exp)
  (define (normalize-term M) (normalize M (λ (x) x)))

  (define (normalize M k)
    (match M
      [(? Value?) (k M)]
      
      [`(,(? λ-or-lambda?) ,params ,eb)
       (k `(λ ,params ,(normalize-term eb)))]

      [`(let () ,body)
       (normalize body k)]
      
      [`(let ([,xs ,rhss] ...) ,body)
       (k `(let ,(map (λ (x rhs) `(,x ,(normalize-term rhs))) xs rhss) ,(normalize-term body)))]

      [`(let ,var ([,xs ,rhss] ...) ,body)
       (k `(let ,var ,(map (λ (x rhs) `(,x ,(normalize-term rhs))) xs rhss) ,(normalize-term body)))]

      
      #;[`(let ([,xs ,rhs] . ,rest) ,body)
       #;(normalize rhs (λ (param)
                          `(let ([,xs ,param])
                             ,(normalize `(let (,@rest) ,body) k))))
       (k `(let ([,xs ,(normalize-term rhs)])
             ,(normalize-term
               `(let ,rest ,body))))]

      [`(if ,grd ,texp ,fexp)
       (normalize-name grd (λ (param)
                             (k `(if ,param
                                     ,(normalize-term texp)
                                     ,(normalize-term fexp)))))]
      
      [`(apply ,es ...)
       (normalize-name* es
                        (λ (xs)
                          (k `(apply . ,xs))))]

      [`(call/cc ,e0)
       (normalize-name e0
                       (λ (param)
                         (k `(call/cc ,param))))]

      
      [`(,Fn ...)
       (normalize-name* Fn k)]
      
      
      [else (raise `(error ,(format "Unknown expression: ~a" M)))]))

  (define (normalize-name M k)
    (normalize M (λ (param)
                   (match param
                     [(? Value?) (k param)]
                     [`(,(? λ-or-lambda?) ,param ,body)
                      (k `(λ ,param ,body))]
                     [else
                      (let ([t (gensym 't)]) 
                        `(let ([,t ,param]) ,(k t)))]))))

  (define (normalize-name* M* k)
    (if (null? M*)
        (k '())
        (normalize-name (car M*) (λ (param) 
                                   (normalize-name*
                                    (cdr M*)
                                    (λ (param*) 
                                      (k `(,param . ,param*))
                                      ))))))
  
  (normalize-term exp))


(define (run e)
  (displayln
   (pretty-format
    (anf-convert (desugar e)))))

;(run '(apply (lambda (a b c) b) (list 1 (list 5 6) 4)))
;(run '(apply + (let* ([a 3] [b (* 2 a)]) (list a b))))