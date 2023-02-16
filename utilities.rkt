#lang racket

(provide append-line-to-file convert-id-to-c)

(define filename "cpp/cpp_program.cpp")

; appends a list of line in the program, default mode is append, if not specified
(define (append-line-to-file filename line [mode 'append])
  (define outfile (open-output-file #:exists mode filename))

  (displayln line outfile)
  
  (close-output-port outfile))


; appends a list of lines in the program
(define (append-list-to-file filename lst [mode 'append])
  (define outfile (open-output-file #:exists mode filename))

  (for ([item lst])
    (displayln item outfile))
  
  (close-output-port outfile))

; Takes a symbol as input and returns a string that represents a C-compatible identifier
(define (convert-id-to-c sym)
  (foldr string-append
         (string-append)
         
         (map (λ (ch)
                (cond
                  [(or (char-alphabetic? ch) (char-numeric? ch) (eq? ch #\_)) (string ch)]
                  ; converting into unicode code point in hexadecimal format
                  [else (string-append "_u" (number->string (char->integer ch) 16))]))
              (string->list (symbol->string sym)))))


; starting the program by replacing the old file, if exists
; (append-line-to-file filename "#include<stdio.h>" 'replace)
; (append-line-to-file filename "#include<cstring.h>" )
; (append-line-to-file filename (string-append "#include " "\"header.h\""))
; (append-line-to-file filename "using namespace std;\n" )

; (define lst2 '(1 2 3 4 5 6 7 8  10))
; (append-list-to-file filename lst2)
; printing end of the program
; (define line "\n// end of program")
; (append-line-to-file filename line)