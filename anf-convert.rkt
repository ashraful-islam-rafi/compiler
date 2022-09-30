#lang racket


(require "desugar.rkt")
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
    [(or (? symbol?) (? number?) (? boolean?) (? string?) (? char?) '(void)) #t]
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
      
      [`(let ([,xs ,rhs] . ,rest) ,body)
       (normalize rhs (λ (param)
                        `(let ([,xs ,param])
                           ,(normalize `(let (,@rest) ,body) k))))]

      [`(if ,grd ,texp ,fexp)
       (normalize-name grd (λ (param)
                             (k `(if ,param
                                     ,(normalize-term texp)
                                     ,(normalize-term fexp)))))]
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
                                   (normalize-name* (cdr M*)
                                                    (λ (param*) 
                                                      (k `(,param ,@param*))))))))
  
  (normalize-term exp))

(anf-convert (add-prims-to-prog (desugar '(+ 2 3))))
(anf-convert '(+ (if 1 2 #f) 2))
(anf-convert '(+ (if (f x) 0 1) 2))
(anf-convert (desugar '(let ([x #f] [f (lambda (b) (not b))]) (+ (if (f x) 0 1) 2))))
(anf-convert (desugar '(let* ([a 3] [b (* 2 a)]) (cons a b))))

(anf-convert '(let ([a '2]
                    [b '3])
                (let ([a b]
                      [b a])
                  (+ a b))))



(anf-convert (desugar '(pushPrompt (newPrompt) (+ 3 4))))
(anf-convert (desugar '(let* ([a 3] [b (* 2 a)]) (cons a b))))