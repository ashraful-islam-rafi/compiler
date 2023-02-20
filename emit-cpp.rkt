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

  (define main_proc (car proc_list))
  (define other_procs (cdr proc_list))

  ;(pretty-display main_proc)
  ;(pretty-display other_procs)

  (define (convert-proc-body body)
    ;(displayln (~a "cpb: " body))
    (define (get-c-string s) (string->symbol (convert-id-to-c s)))

    (match body
      [`(let ([,lhs ',val]) ,letbody)

       (match val
         [(? number? )
          (append-line filename (format "void* ~a = encodeInt(~a);" (get-c-string lhs) val))
          (convert-proc-body letbody)]

         [(? boolean? )
          (append-line filename (format "void* ~a = encodeBoolean(~a);" (get-c-string lhs) val))
          (convert-proc-body letbody)]

         [(? null? )
          (append-line filename (format "void* ~a = encodeString(~a);" (get-c-string lhs) "null"))
          (convert-proc-body letbody)]

         [(or (? string? ) (? symbol?))
          (append-line filename (format "void* ~a = encodeString(~a);" (get-c-string lhs) val))
          (convert-proc-body letbody)]
         [_ 'todo]
         )

       ]

      [`(let ([,lhs (new-closure ,ptr ,args ...)]) ,letbody)
       (define arglength (+ (length args) 1))

       ; new-closure
       (define line (format "void** ~a = (void**)malloc(sizeof(void*) * ~a);" (get-c-string lhs) arglength))
       (append-line filename line)

       (append-line
        filename
        (format "~a[~a] = (void*)(&~a);" (get-c-string lhs) 0 ptr))

       #;(foldl (λ (i item res)
                  (append-line
                   filename
                   (format "~a[~a] = (void*)~a;" (get-c-string lhs) i (get-c-string item))))

                '()
                (range 1 arglength)
                args)

       (for/list ([i (in-range 1 arglength)]
                  [item args])

         (append-line
          filename
          (format "~a[~a] = (void*)~a;" (get-c-string lhs) i (get-c-string item))))

       (append-line filename "\n")
       (convert-proc-body letbody)]

      [`(let ([,lhs (prim ,op ,args ...)]) ,letbody)
       (define line (format "void* ~a = prim_~a(~a);" (get-c-string lhs) op
                            (string-join
                             (map (λ (item) (format "~a" (get-c-string item))) args)
                             ", ")))

       (append-line filename line)

       (convert-proc-body letbody)]

      [`(let ([,lhs (apply-prim ,op ,arg)]) ,letbody)
       (define line (format "void* ~a = apply_prim_~a(~a);" (get-c-string lhs) (get-c-string op) (get-c-string arg)))

       (append-line filename line)

       (convert-proc-body letbody)]

      [`(let ([,lhs (env-lookup ,env ,idx)]) ,letbody)
       (define line (format "void* ~a = ~a[~a];" (get-c-string lhs) env idx))
       (append-line filename line)

       (convert-proc-body letbody)]

      [`(let ([,lhs ,val]) ,letbody)

       ; variable assingment
       (define line (format "void* ~a = encodeInt(~a);" (get-c-string lhs) val))
       (append-line filename line)

       (convert-proc-body letbody)]

      [`(if ,grd ,texp ,fexp)
       'todo]

      [`(app-clo ,func ,args)
       (append-line filename "\nvoid (*fun_ptr) (void*,void*);")
       (append-line filename (format "fun_ptr = ~a[~a];" (get-c-string func) 0))
       (append-line filename (format "fun_ptr(~a, ~a);" (get-c-string func) args))

       ]

      ))


  (define (convert-procs proc)
    (match-define `(proc ,ptr ,env ,arg ,body) proc)

    (displayln "--------")
    (pretty-print proc)
    (pretty-print ptr)
    (pretty-print env)
    (pretty-print arg)
    (pretty-print body)
    (displayln "--------")

    (define func_name (format "void ~a(void* ~a, void* ~a)\n{\n" ptr env arg))

    (append-line filename func_name)
    (convert-proc-body body)

    (append-line filename "\n}\n")
    )


  
  (map convert-procs other_procs)
  (convert-procs main_proc)
  'cpp-emission-done!)



(define prog '(+ 1 2))
(define clo_converted_prog (closure-convert (cps-convert (anf-convert (desugar (add-prims-to-prog prog))))))
; (pretty-print clo_converted_prog)


(define example
  '((proc
     main
     mainenv3827
     mainarg3828
     (let ((a '6))
       (let ((d '2))
         (let ((e '3))
           (let ((c (new-closure ptr3823 + d a)))
             (let ((f (new-closure ptr3825 + d e)))
               (let ((id3804 4))
                 (let ((id3805 5))
                   (let ((oldarg3820 '()))
                     (let ((newarg3821 (prim cons id3805 oldarg3820)))
                       (let ((newarg3822 (prim cons id3804 newarg3821)))
                         (app-clo f newarg3822))))))))))))
    (proc
     ptr3823
     env3824
     arglst3806
     (let ((a (env-lookup env3824 3)))
       (let ((d (env-lookup env3824 2)))
         (let ((+ (env-lookup env3824 1)))
           (let ((x (prim car arglst3806)))
             (let ((arg-lst3807 (prim cdr arglst3806)))
               (let ((oldarg3808 '()))
                 (let ((newarg3809 (prim cons d oldarg3808)))
                   (let ((newarg3810 (prim cons a newarg3809)))
                     (let ((newarg3811 (prim cons x newarg3810)))
                       (app-clo + newarg3811)))))))))))
    (proc
     ptr3825
     env3826
     arglst3812
     (let ((e (env-lookup env3826 3)))
       (let ((d (env-lookup env3826 2)))
         (let ((+ (env-lookup env3826 1)))
           (let ((a (prim car arglst3812)))
             (let ((arg-lst3813 (prim cdr arglst3812)))
               (let ((b (prim car arg-lst3813)))
                 (let ((arg-lst3814 (prim cdr arg-lst3813)))
                   (let ((oldarg3815 '()))
                     (let ((newarg3816 (prim cons b oldarg3815)))
                       (let ((newarg3817 (prim cons a newarg3816)))
                         (let ((newarg3818 (prim cons d newarg3817)))
                           (let ((newarg3819 (prim cons e newarg3818)))
                             (app-clo + newarg3819)))))))))))))))
  )


; (emit-cpp example)
(emit-cpp clo_converted_prog)
