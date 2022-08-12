#lang racket

(provide lex)

(require parser-tools/lex)
(require (prefix-in : parser-tools/lex-sre))
(require racket/trace)

(define-lex-abbrev digits (:+ (char-set "0123456789")))
(define-lex-abbrev char-smaller-case (:+ (char-range #\a #\z)))
(define-lex-abbrev char-upper-case (:+ (char-range #\A #\Z)))
(define-lex-abbrev arithmatic-symbols (:or #\+ #\* #\- #\/ #\^))
(define-lex-abbrev left-paren #\()
(define-lex-abbrev right-paren #\))
(define-lex-abbrev left-square-bracket #\[)
(define-lex-abbrev right-square-bracket #\])
(define-lex-abbrev left-curly-bracket #\{)
(define-lex-abbrev right-curly-bracket #\})
(define-lex-abbrev special-symbols (:or #\λ))
(define-lex-abbrev boolean-keywords (:or "true" "false" "#t" "#f" ))
(define-lex-abbrev special-keywords (:or "call/cc" "let/cc" "let*"))
(define-lex-abbrev logical-operators (:or "<" ">" "<=" ">=" "="))


(define-struct ast [left op right])

(define lex
  (lexer
   ; ignoring whitespaces and newlines
   [whitespace (lex input-port)]
    
   ; if digits from 0 to 9
   [digits 
    (list 'Int (string->number lexeme))]

   ; if boolean
   [boolean-keywords
    (list 'Bool (string->symbol lexeme))]

   ; if special keywords
   [special-keywords
    (list 'Special-kw (string->symbol lexeme))]

   ; if logical operators
   [logical-operators
    (list 'Logical-op (string->symbol lexeme))]
    
   ; if decimal digits
   [(:or (:seq (:? digits) "." digits)(:seq digits "."))
    (list 'Dec (string->number lexeme))]
    
   ; if any character 
   [(:or char-smaller-case char-upper-case)
    (list 'Char (string->symbol lexeme))]
   
   
   ; if arithmatic symbol
   [(:or arithmatic-symbols special-symbols)
    (list 'Sym (string->symbol lexeme))]
    
   ; if left paren
   [left-paren '(LP)]

   ; if left square bracket
   [left-square-bracket '(LSB)]

   ; if left curly bracket
   [left-curly-bracket '(LCB)]
   
   ; if right paren 
   [right-paren '(RP)]
   
   ; if right square bracket 
   [right-square-bracket '(RSB)]
   
   ; if right curly bracket 
   [right-curly-bracket '(RCB)]
    
   ; returning 'EOF on eof
   [(eof) '()]))

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
                ;['+ (build-sexp-list (cons symb lst))]
                ;['- (build-sexp-list (cons symb lst))]
                ;['* (build-sexp-list (cons symb lst))]
                ;['/ (build-sexp-list (cons symb lst))]
                ;['^ (build-sexp-list (cons symb lst))]
                [_ (build-sexp-list (cons symb lst))]
                )]
             
             [`(Int ,num) 
              (build-sexp-list (cons num lst))]

             [`(Dec ,num) 
              (build-sexp-list (cons num lst))]

             [`(Bool ,kw) 
              (match kw
                ['true (build-sexp-list (cons kw lst))]
                ['false (build-sexp-list (cons kw lst))]
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




(define (cek-interp prog)
  ; Helper function to check if symbol λ or tag lambda
  (define (λ-or-lambda? str)
    (match str
      [(or (== 'lambda) (== 'λ)) #t]
      [else #f]))
  
  (define (eval exp env kont)
    (displayln (~a "eval : " (list exp env 'konT: kont)))
    (match exp
      ; unit case, variable reference with an empty(mt) state
      ; means we have reached a fixed-point!

      [(? symbol? x)
       (ret (hash-ref env x) kont)]

      [(? number? n)
       (ret n kont)]

      [(? boolean? b)
       (ret b kont)]

      [`(if ,grd, texp, fexp)
       (eval grd env `(ifk ,texp ,fexp ,env ,kont))]

      [`(and ,e0, e1)
       (eval e0 env `(andk ,e1 ,env ,kont))]

      [`(or ,e0 ,e1)
       (eval e0 env `(ork ,e1 ,env ,kont))]
      
      [`(not ,exp)
       (eval exp env `(notk ,env ,kont))]

      [`(let ((,x ,e0)) ,e1)
       (eval e0 env `(letk ,x ,e1 ,env ,kont))]

      [`(call/cc ,e0)
       (eval e0 env `(callcc-k ,kont))]
      
      ; application case...
      [`(,ef ,ea)
       (eval ef env `(ar ,ea ,env ,kont))]

      ; means it's a closure form or abstraction
      [`(,(? λ-or-lambda?) (,x) ,eb)
       ;(displayln (~a "x: "x " eb: "eb))
       (ret `(clo (λ (,x) ,eb) ,env) kont)]

      ;otherwise, it's a wrong expression!
      [else (raise `(Error occured in eval function!...State: ,exp ,env ,kont))]))
  
  (define (ret val kont)
    (displayln (~a "ret  : " (list val kont)))
    (match kont
      ; means we have nothing left to do, so return the value (val)
      ['mt val]

      [`(ifk ,texp ,fexp ,this_env ,this_kont)
       (if val
           (eval texp this_env this_kont)
           (eval fexp this_env this_kont))]

      [`(andk ,ea ,this_env, this_kont)
       (if val
           (eval ea this_env this_kont)
           (ret val this_kont))]

      [`(ork ,ea ,this_env, this_kont)
       (if val
           (ret val this_kont)
           (eval ea this_env this_kont))]
      
      [`(notk ,this_env, this_kont)
       (if val
           (ret #f this_kont)
           (ret #t this_kont))]

      [`(letk ,x ,exp ,this_env ,this_kont)
       (eval exp (hash-set this_env x val) this_kont)]

      [`(callcc-k ,this_kont)
       (apply val `(kont ,this_kont) this_kont)]
      
      [`(ar ,ea ,this_env ,this_kont)
       (eval ea this_env `(fn ,val ,this_kont))]

      [`(fn ,vf ,kont)
       (apply vf val kont)]

      [else (raise `(Error occured in ret function!...State: ,val ,kont))]))
  
  (define (apply vf va kont)
    (displayln (~a "apply: " (list vf va kont)))
    (match vf
      [`(clo (λ (,x) ,eb) ,env)
       (eval eb (hash-set env x va) kont )]

      [`(kont ,this_kont)
       (ret va this_kont)]

      [else (raise `(Error occured in apply function!...State: ,vf ,va ,kont))]))
  
  (eval prog (hash) 'mt))


;;;;;;; test-cases
(define case-11 "(+ 2 (* 2 {- 5 1} (* 3 1)) 2)")
(define case-0 "(+ 2 (+ 1 (* 2 3) (- 10 6)) (+ 1 4) 5.5 2)")
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


(define case-9 "(((call/cc (λ (x) ((x x) x))) (λ (y) y)) #t))")

;;;;;;; Run examples

;(cek-interp (parse (open-input-string case-8)))
;(cek-interp (parse (open-input-string case-9)))

;(cek-interp '((λ (x) x) (if #f 1 2)))
;(cek-interp '((lambda () 5)))