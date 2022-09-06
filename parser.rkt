#lang racket

(provide parse)
(require "lexer.rkt")

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
                ;[`|.| (build-sexp-list (cons '. lst))]
                ;[`|'| (build-sexp-list (cons ' lst))]
                [_ (build-sexp-list (cons symb lst))]
                )]
             
             [`(Int ,num) 
              (build-sexp-list (cons num lst))]

             [`(Dec ,num) 
              (build-sexp-list (cons num lst))]

             [`(Bool ,kw) 
              (match kw
                ['true (build-sexp-list (cons true lst))]
                ['false (build-sexp-list (cons false lst))]
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
                ;['|'| (build-sexp-list lst)]
                
                )]

             [`(Char ,chr)
              (build-sexp-list (cons chr lst))]
             
             [(or `(RP) `(RSB) `(RCB))
              (reverse lst)]

             [_ (build-sexp-list (cons token lst))])]))))
  
  (let [(next-token (lex prog))]
    (build-sexp-list '())))

; test parser
;(parse (open-input-string "(let ([a '6] [b '8]) a)"))
;(parse (open-input-string "(quote (1 2 . (3)))"))