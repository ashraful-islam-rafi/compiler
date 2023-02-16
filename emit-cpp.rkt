#lang racket

(require    "utilities.rkt"
            "closure-convert.rkt"
            "cps-convert.rkt"
            "anf-convert.rkt"
            "desugar.rkt")

(define filename "cpp/cpp_program.cpp")

; test program
(define (test-program)
  (define test_prog
    (string-append "int main() {
        
        int value = 1001;
        void* encodedInt = encodeInt(value); 
        int decodedInt = decodeInt(encodedInt);
        cout <<" "\"Encoded int value: \"" "<< encodedInt << endl;
        cout <<" "\"Decoded int value: \"" "<< decodedInt << endl;

        bool bvalue = true;
        void* encodedBool = encodeBool(bvalue);
        bool decodedBool = decodeBool(encodedBool);
        cout <<" "\"Encoded boolean value: \"" "<< encodedBool << endl;
        cout <<" "\"Decoded boolean value: \"" "<< decodedBool << endl;

        string svalue =" "\"is this working?\""";
        void* encodedString = encodeString(svalue);
        string decodedString = decodeString(encodedString);
        cout <<" "\"Encoded string value: \"" "<< encodedString << endl;
        cout <<" "\"Decoded string value: \"" "<<decodedString << endl;

    }"))


  ; starting the program by replacing the old file, if exists
  (append-line-to-file filename "#include<stdio.h>" 'replace)
  (append-line-to-file filename "#include<string.h>" )
  (append-line-to-file filename (string-append "#include " "\"header.h\""))
  (append-line-to-file filename "using namespace std;\n" )


  (append-line-to-file filename test_prog)

  ; (define lst2 '(1 2 3 4 5 6 7 8  10))
  ; (append-list-to-file filename lst2)

  ; printing end of the program
  (define line "\n// end of program")
  (append-line-to-file filename line)
  )
;(test-program)



(define (emit-cpp proc_list)

  ; defining header files
  ; starting writting the program by replacing the old file, if exists
  (append-line-to-file filename "#include<stdio.h>" 'replace)
  (append-line-to-file filename "#include<string.h>" )
  (append-line-to-file filename (string-append "#include " "\"header.h\""))
  (append-line-to-file filename "using namespace std;\n" )

  (define main_proc (car proc_list))
  (define rest_procs (cdr proc_list))

  ;(pretty-display main_proc)
  ;(pretty-display rest_procs)

  (define (convert-proc-body body)
    ;(displayln (~a "cpb: " body))
    (define (get-c-string s) (string->symbol (convert-id-to-c s)))

    (match body
      [`(let ([,lhs ',val]) ,letbody)

       ; variable assingment
       (define line (format "void* ~a = encodeInt(~a);" (get-c-string lhs) val))
       (append-line-to-file filename line)
       (convert-proc-body letbody)]

      [`(let ([,lhs (new-closure ,ptr ,args ...)]) ,letbody)
       (define arglength (+ (length args) 1))

       ; new-closure
       (define line (format "void** ~a = (void**)malloc(sizeof(void*) * ~a);" (get-c-string lhs) arglength))
       (append-line-to-file filename line)

       (cond
         [(= (length args) 0)
          (append-line-to-file
           filename
           (format "~a[~a] = (void*)(&~a);" (get-c-string lhs) 0 ptr))]
         [else
          (for/list ([i (in-range 1 (length args))] [item args])
            (append-line-to-file
             filename
             (format "~a[~a] = (void*)~a;" (get-c-string lhs) i (get-c-string item))))
          ])



       (convert-proc-body letbody)]

      [`(let ([,lhs (prim ,op ,args ...)]) ,letbody)
       ; variable assingment
       (define line (format "void* ~a = encode_cons(~a);" (get-c-string lhs) args))
       (append-line-to-file filename line)
       (convert-proc-body letbody)]

      [`(let ([,lhs ,val]) ,letbody)

       ; variable assingment
       (define line (format "void* ~a = encodeInt(~a);" (get-c-string lhs) val))
       (append-line-to-file filename line)
       (convert-proc-body letbody)]

      [`(app-clo ,func ,args)
       (append-line-to-file filename "void (*fun_ptr) (void*, void*); ")
       (append-line-to-file filename (format "fun_ptr = ~a[~a];" (get-c-string func) 0))
       (append-line-to-file filename (format "fun_ptr(~a, ~a);" (get-c-string func) args))
       ]

      ))


  (define (convert-procs proc)
    (match-define `(proc ,ptr ,env ,arg ,body) proc)

    ; (displayln "--------")
    ; (pretty-print proc)
    ; (pretty-print ptr)
    ; (pretty-print env)
    ; (pretty-print arg)
    ; (pretty-print body)
    ; (displayln "--------")

    (define func_name (format "void ~a(void* ~a, void* ~a)\n{\n" ptr env arg))

    (append-line-to-file filename func_name)

    (convert-proc-body body)


    ;  (body-convert procbody)
    (append-line-to-file filename "\n}\n")
    )


  (convert-procs main_proc)
  'cpp-emission-finished)



(define prog '(+ 1 2))
(define clo_converted_prog (closure-convert (cps-convert (anf-convert (desugar (add-prims-to-prog prog))))))
; (pretty-print clo_converted_prog)

(emit-cpp clo_converted_prog)
