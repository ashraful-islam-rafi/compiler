#lang racket

(require "utilities.rkt")

(provide emit-cpp)

(define filename "cpp/cpp_program.cpp")

(define (emit-cpp proc_list)

  ; defining cpp header files
  ; replace the old cpp file, if exists
  (append-line filename "#include<stdio.h>" 'replace)
  (append-line filename "#include<string.h>" )
  (append-line filename (string-append "#include " "\"header.h\""))
  (append-line filename "using namespace std;\n" )

  ;(pretty-display proc_list)
  ;(pretty-display main_proc)
  ;(pretty-display other_procs)

  (define (convert-proc-body proc_env proc_arg body)
    ;(displayln (~a "cpb: " body))
    (define (true? x) (if x #t #f))
    (define (get-c-string s) (string->symbol (convert-id-to-c s)))

    (match body
      [`(let ([,lhs ',val]) ,letbody)

       (match val
         [(? number? )
          (append-line filename (format "void* ~a = reinterpret_cast<void *>(encode_int((s32)~a));" (get-c-string lhs) val))
          (convert-proc-body proc_env proc_arg letbody)]

         [(? boolean? )
          (cond [(true? val)
                 (append-line filename (format "void* ~a = reinterpret_cast<void *>(encode_bool((s32)~a));" (get-c-string lhs) 1))
                 (convert-proc-body proc_env proc_arg letbody)]
                [else
                 (append-line filename (format "void* ~a = reinterpret_cast<void *>(encode_bool((s32)~a));" (get-c-string lhs) 0))
                 (convert-proc-body proc_env proc_arg letbody)
                 ])]

         [(? null? )
          (append-line filename (format "void* ~a = encode_null();" (get-c-string lhs)))
          (convert-proc-body proc_env proc_arg letbody)]

         [(? symbol?)
          (append-line filename (format "void* ~a = reinterpret_cast<void *>(encode_string(new string(\"~a\")));"
                                        (get-c-string lhs) val))
          (convert-proc-body proc_env proc_arg letbody)]

         [(? string? )
          (append-line filename (format "void* ~a = reinterpret_cast<void *>(encode_string(new string(\"~a\")));"
                                        (get-c-string lhs) val))
          (convert-proc-body proc_env proc_arg letbody)]

         [_ (raise (format "Unknown datatype! ~a" val))]
         )
       ]

      [`(let ([,lhs (new-closure ,ptr ,args ...)]) ,letbody)
       (define arglength (length args))

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

       (for ([i (in-range 1 (+ arglength 1))]
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

       (match val
         [(? number? )
          (append-line filename (format "void* ~a = reinterpret_cast<void *>(encode_int((s32)~a));" (get-c-string lhs) val))
          (convert-proc-body proc_env proc_arg letbody)]

         [(? boolean? )
          (cond [(true? val)
                 (append-line filename (format "void* ~a = reinterpret_cast<void *>(encode_bool((s32)~a));" (get-c-string lhs) 1))
                 (convert-proc-body proc_env proc_arg letbody)]
                [else
                 (append-line filename (format "void* ~a = reinterpret_cast<void *>(encode_bool((s32)~a));" (get-c-string lhs) 0))
                 (convert-proc-body proc_env proc_arg letbody)
                 ])]

         [(? null? )
          (append-line filename (format "void* ~a = encode_null();" (get-c-string lhs)))
          (convert-proc-body proc_env proc_arg letbody)]

         [(? symbol?)
          (append-line filename (format "void* ~a = reinterpret_cast<void *>(encode_string(new string(\"~a\")));"
                                        (get-c-string lhs) val))
          (convert-proc-body proc_env proc_arg letbody)]

         [(? string? )
          (append-line filename (format "void* ~a = reinterpret_cast<void *>(encode_string(new string(\"~a\")));"
                                        (get-c-string lhs) val))
          (convert-proc-body proc_env proc_arg letbody)]


         [_ (raise (format "Unknown datatype! ~a" val))]
         )]

      [`(if ,grd ,texp ,fexp)
       (append-line filename "\n//if-clause")
       (define guard (gensym 'if_guard))

       (append-line filename (format "u64 ~a = reinterpret_cast<u64>(is_true(~a));" guard grd))
       (append-line filename (format "if(~a == 1)\n{" guard))
       (convert-proc-body proc_env proc_arg texp)
       (append-line filename "}\nelse\n{")
       (convert-proc-body proc_env proc_arg fexp)
       (append-line filename "}\n")
       ]

      [`(not ,exp)
       (convert-proc-body proc_env proc_arg `(if ,exp #f #t))]

      [`(and) (convert-proc-body proc_env proc_arg #t)]
      [`(and ,e0) (convert-proc-body proc_env proc_arg e0)]
      [`(and ,e0 ,es ...)
       (convert-proc-body proc_env proc_arg `(if ,e0 (and ,@es) #f))]

      [`(or) (convert-proc-body proc_env proc_arg #f)]
      [`(or ,e0) (convert-proc-body proc_env proc_arg e0)]
      [`(or ,e0 ,es ...)
       (define temp (gensym 'or))
       (convert-proc-body proc_env proc_arg
                          `(let ([,temp ,e0])
                             (if ,temp ,temp (or ,@es))))]

      [`(call/cc ,e0)
       	(convert-proc-body proc_env proc_arg e0)]

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

    ; uncomment these two lines for debugging!
    ; (append-line filename (format "cout<<\"In ~a\";" ptr))
    ; (append-line filename (format "print_val(~a);\n" arg))

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

; fix-bug for '() program!