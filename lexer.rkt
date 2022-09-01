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
(define-lex-abbrev special-symbols (:or #\λ "=>"))
(define-lex-abbrev boolean-keywords (:or "true" "false" "#t" "#f" ))
(define-lex-abbrev special-keywords (:or "call/cc" "let/cc" "let*" "prompt" "null?" "equal?"))
(define-lex-abbrev logical-operators (:or "<" ">" "<=" ">=" "="))

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
   ;[(:or char-smaller-case char-upper-case)
    ;(list 'Char (string->symbol lexeme))]

   [(repetition 1 +inf.0 (union char-smaller-case char-upper-case))
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
    
   ; returning null on eof
   [(eof) '()]))

; test lexer
#;
(begin
  (define in (open-input-string "(+ 420 (* 2 (/ 3 3)))"))
  (lex in)
  (lex in))