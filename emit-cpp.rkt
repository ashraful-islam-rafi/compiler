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
  (append-line filename "#include<stdio.h>" 'replace)
  (append-line filename "#include<string.h>" )
  (append-line filename (string-append "#include " "\"header.h\""))
  (append-line filename "using namespace std;\n" )


  (append-line filename test_prog)

  ; (define lst2 '(1 2 3 4 5 6 7 8  10))
  ; (append-list-to-file filename lst2)

  ; printing end of the program
  (define line "\n// end of program")
  (append-line filename line)
  )
;(test-program)



(define (emit-cpp proc_list)

  ; defining header files
  ; starting writting the program by replacing the old file, if exists
  (append-line filename "#include<stdio.h>" 'replace)
  (append-line filename "#include<string.h>" )
  (append-line filename (string-append "#include " "\"header.h\""))
  (append-line filename "using namespace std;\n" )

  ; (pretty-display proc_list)
  ;(pretty-display main_proc)
  ;(pretty-display other_procs)

  (define (convert-proc-body proc_env proc_arg body)
    ;(displayln (~a "cpb: " body))
    (define (get-c-string s) (string->symbol (convert-id-to-c s)))

    (match body
      [`(let ([,lhs ',val]) ,letbody)

       (match val
         [(? number? )
          (append-line filename (format "void* ~a = reinterpret_cast<void *>(encode_int((s32)~a));" (get-c-string lhs) val))
          (convert-proc-body proc_env proc_arg letbody)]

         [(? boolean? )
          (append-line filename (format "void* ~a = encode_boolean(~a);" (get-c-string lhs) val))
          (convert-proc-body proc_env proc_arg letbody)]

         [(? null? )
          (append-line filename (format "void* ~a = encode_null();" (get-c-string lhs)))
          (convert-proc-body proc_env proc_arg letbody)]

         [(or (? string? ) (? symbol?))
          (append-line filename (format "void* ~a = encode_string(~a);" (get-c-string lhs) val))
          (convert-proc-body proc_env proc_arg letbody)]

         [_ (raise (format "Unknown datatype! ~a" val))]
         )

       ]

      [`(let ([,lhs (new-closure ,ptr ,args ...)]) ,letbody)
       (define arglength (length args) )

       ; new-closure
       (append-line filename "\n//creating new closure instance")

       (define ptrName (gensym 'ptr))

       (append-line filename (format "auto ~a = reinterpret_cast<void (*)(void *, void *)>(&~a);" ptrName ptr))

       (append-line
        filename
        (format "~a = allocate_env_space(encode_int((s32)~a));" proc_env arglength))

       (append-line
        filename
        (format "void* ~a = make_closure(reinterpret_cast<void *>(~a), ~a);" (get-c-string lhs) ptrName proc_env))

       #;(foldl (λ (i item res)
                  (append-line
                   filename
                   (format "set_env(~a, ~a, ~a);" proc_env i (get-c-string item))))

                '()
                (range 1 (+ arglength 1))
                args)

       (when (> (+ arglength 1) 1) (append-line filename "\n//setting env list"))

       (for/list ([i (in-range 1 (+ arglength 1))]
                  [item args])

         (append-line
          filename
          (format "set_env(~a, encode_int((s32)~a), ~a);" proc_env i (get-c-string item))))

       ;  (when (> (+ arglength 1) 1) (append-line filename "\n"))
       (append-line filename "\n")

       (convert-proc-body proc_env proc_arg letbody)]

      [`(let ([,lhs (prim ,op ,args ...)]) ,letbody)
       (define line (format "void* ~a = prim_~a(~a);" (get-c-string lhs) op
                            (string-join
                             (map (λ (item) (format "~a" (get-c-string item))) args)
                             ", ")))

       (append-line filename line)

       (convert-proc-body proc_env proc_arg letbody)]

      [`(let ([,lhs (apply-prim ,op ,arg)]) ,letbody)
       (define line (format "void* ~a = apply_prim_~a(~a);" (get-c-string lhs) (get-c-string op) (get-c-string arg)))

       (append-line filename line)

       (convert-proc-body proc_env proc_arg letbody)]

      [`(let ([,lhs (env-lookup ,env ,idx)]) ,letbody)
       (append-line filename (format "void* ~a = get_env_value(~a, encode_int((s32)~a));" (get-c-string lhs) env idx))

       (convert-proc-body proc_env proc_arg letbody)]

      [`(let ([,lhs ,val]) ,letbody)
       (append-line filename (format "void* ~a = reinterpret_cast<void *>(encode_int((s32)~a));" (get-c-string lhs) val))
       (convert-proc-body proc_env proc_arg letbody)]

      [`(app-clo ,func ,args)

       (append-line filename "\n//app-clo")
       (define procPtr (gensym 'cloPtr))
       (define procEnv (gensym 'procEnv))

       (append-line filename (format "void* ~a = get_closure_ptr(~a);" procPtr (get-c-string func)))
       (append-line filename (format "void* ~a = get_env(~a);" procEnv (get-c-string func)))

       (append-line filename "\n//calling next proc using a function pointer")
       (append-line filename (format "auto function_ptr = reinterpret_cast<void (*)(void *, void *)>(~a);" procPtr))
       (append-line filename (format "function_ptr(~a, ~a);" procEnv args))

       ]

      ))

  (define (convert-procs proc)
    (match-define `(proc ,ptr ,env ,arg ,body) proc)

    ; (displayln "--------")
    ; ; (pretty-print proc)
    ; (pretty-print ptr)
    ; (pretty-print env)
    ; (pretty-print arg)
    ; (pretty-print body)
    ; ; (displayln "--------")

    (define func_name (format "void ~a(void* ~a, void* ~a)\n{" ptr env arg))

    ; start of function definitions
    (append-line filename func_name)

    (append-line filename (format "cout<<\"In ~a\";" ptr))
    (append-line filename (format "print_val(~a);\n" arg))

    (convert-proc-body env arg body)

    (append-line filename "}\n")
    ;end of function definitions.
    )

  ;; converting the proc list to c++ functions in reverse order
  ;; so that we don't get undefined function error.
  (map convert-procs (reverse proc_list))

  ; writing the main function.
  (append-line filename "int main(int argc, char **argv)\n{")

  ; (append-line filename "halt = make_closure(reinterpret_cast<u64 *>(&fhalt), 0);");
  (append-line filename "//making a call to the root function to kick off our c++ emission.");
  (append-line filename "root(0,0);");

  (append-line filename "}\n")
  ;end of main function.


  'cpp-emission-done!)


(define prog4 '(apply + ((lambda x x) 2 3)))
(define prog '(+ 1 2 (+ 3 5)))
; (define prog '(+ 1 2))
(define prog3 '(- 5))
(define prog2
  '(let ([a '6])
     (let ([d '2])
       (let ([e '3])
         (let ([c (λ (x) (+ x a d))])
           (let ([f (λ (a b) (c (c (+ e d a b))))])
             (f 4 5)))))))

; (define clo_converted_prog (closure-convert (cps-convert (anf-convert (desugar (add-prims-to-prog prog))))))
(define clo_converted_prog (closure-convert (cps-convert (anf-convert (desugar (add-prims-to-prog prog2))))))
; (define clo_converted_prog (closure-convert (cps-convert (anf-convert (desugar (add-prims-to-prog prog4))))))
; (define clo_converted_prog (closure-convert (cps-convert (anf-convert (desugar (add-prims-to-prog prog3))))))
(pretty-print clo_converted_prog)


(emit-cpp clo_converted_prog)