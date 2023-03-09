#lang racket

(require "cps-convert.rkt" "anf-convert.rkt" "desugar.rkt" "prims.rkt")

(provide closure-convert)

(define (λ-or-lambda? str)
  (match str
    [(or (== 'lambda) (== 'λ)) #t]
    [else #f]))


(define (simplify-λ exp)
  ; (displayln (~a "exp: " exp))
  (match exp
    [`(let ([,lhs ',datum]) ,elet)
     `(let ([,lhs ',datum]) ,(simplify-λ elet))]

    [`(let ([,lhs (prim ,op ,es ...)]) ,elet)
     `(let ([,lhs (prim ,op ,@es)]) ,(simplify-λ elet))]

    [`(let ([,lhs (apply-prim ,op ,e)]) ,elet)
     `(let ([,lhs (apply-prim ,op ,e)]) ,(simplify-λ elet))]

    [`(let ([,lhs (,(? λ-or-lambda?) (,args ...) ,elam)]) ,elet)
     ;  (displayln (~a "lamargs: " (list 'lhs: lhs 'args: args 'elam: elam 'elet: elet)))

     (define arglst (gensym 'arglst))
     `(let ([,lhs (λ ,arglst

                    ,(let loop ([args args]
                                [arglst arglst])

                       ;  (displayln (~a "listf: " (list 'args: args 'arglst: arglst)))

                       (cond
                         [(null? args) (simplify-λ elam)]
                         [else
                          (define newarg (gensym 'arg-lst))
                          `(let ([,(car args) (prim car ,arglst)])
                             (let ([,newarg (prim cdr ,arglst)])
                               ,(loop (cdr args) newarg)))])))])

        ,(simplify-λ elet))]

    [`(let ([,lhs (,(? λ-or-lambda?) ,arg ,elam)]) ,elet)
     `(let ([,lhs (λ ,arg ,(simplify-λ elam))]) ,(simplify-λ elet))]

    [`(let ([,lhs ,val]) ,elet)
     `(let ([,lhs ,val]) ,(simplify-λ elet))]

    [`(apply ,f ,args)
     `(apply ,f ,args)]

    [`(if ,grd ,texp ,fexp)
     `(if ,grd ,(simplify-λ texp) ,(simplify-λ fexp))]

    [`(,f ,es ...)
     ;  (displayln (~a "app: " (cons f es)))

     (define arg (gensym 'oldarg))
     `(let ([,arg '()])
        ,(let loop ([es (reverse es)]
                    [oldarg arg])

           ;(displayln (~a "lst: " (list 'proc: f 'es: es 'arg: oldarg)))

           (cond
             [(null? es) `(apply ,f ,oldarg)]
             [(pair? es)
              (define newarg (gensym 'newarg))
              `(let ([,newarg (prim cons ,(car es) ,oldarg)])
                 ,(loop (cdr es) newarg))])))
     ]))


(define (let-bound-program exp)
  (define (normalize-ae proc exp)
    (let loop ([ae_lst exp]
               [acc '()])

      ; (displayln (~a "ae_list: " ae_lst " acc: " acc "\n"))
      (match ae_lst
        [(? null? ae_lst) (proc acc)]
        [`(,aes ...)
         (cond
           [(symbol? (car aes))
            (loop (cdr aes) (append acc `(,(car aes))))]
           [else
            (define newarg (gensym 'id))
            (let-bound-program
             `(let ([,newarg ,(car aes)])
                ,(loop (cdr aes) (append acc `(,newarg)))))
            ])])))

  (match exp
    [`(let ([,lhs ',datum]) ,elet)
     `(let ([,lhs ',datum]) ,(let-bound-program elet))]

    [`(let ([,lhs (prim ,op ,es ...)]) ,elet)
     (normalize-ae (λ (args)
                     `(let ([,lhs (prim ,op ,@args)])
                        ,(let-bound-program elet))) es)]

    [`(let ([,lhs (apply-prim ,op ,es ...)]) ,elet)
     (normalize-ae (λ (args)
                     `(let ([,lhs (apply-prim ,op ,@args)])
                        ,(let-bound-program elet)))
                   es)]

    [`(let ([,lhs (,(? λ-or-lambda?) ,args ,elam)]) ,elet)
     `(let ([,lhs (λ ,args ,(let-bound-program elam))])
        ,(let-bound-program elet))]

    [`(let ([,lhs ,val]) ,elet)
     `(let ([,lhs ,val]) ,(let-bound-program elet))]

    [`(apply ,f ,args)
     (normalize-ae (λ (args) `(apply ,@args)) (list f args))]

    [`(if ,grd ... ,texp ,fexp)
     (normalize-ae (λ (args)
                     `(if ,@args
                          ,(let-bound-program texp)
                          ,(let-bound-program fexp)))
                   grd)]

    [(? symbol? x) (normalize-ae (λ (args) args) (list x))]

    [`(,aes ...)
     (normalize-ae (λ (args) args) aes)]))

(define (closure-convert exp)
  ; returns -> an updated expression, free variable set, procedure list
  (define (bottomup-convert ex [procs '()])
    (define (get-new-proc-body vars body env_name)
      (let loop ([count 1]
                 [vars vars]
                 [acc_body body])
        (match vars
          [(? null? vars) acc_body]
          [_
           (loop
            (+ 1 count)
            (cdr vars)
            `(let ([,(car vars) (env-lookup ,env_name ,count)]) ,acc_body)
            )])))

    (match ex
      [`(let ([,lhs ',val]) ,body)
       (match-define (list temp_body free_vars temp_procs) (bottomup-convert body procs))
       (define final_vars_set (set-remove free_vars lhs))

       (list `(let ([,lhs ',val]) ,temp_body) final_vars_set temp_procs)]

      [`(let ([,lhs (prim ,op ,args ...)]) ,body)
       (match-define (list temp_body free_vars temp_procs) (bottomup-convert body procs))

       (define rmv_duplicates (list->set args))
       (define combined_args (set-union free_vars rmv_duplicates))
       (define final_vars_set (set-remove combined_args lhs))

       (list `(let ([,lhs (prim ,op ,@args)]) ,temp_body) final_vars_set temp_procs)]

      [`(let ([,lhs (apply-prim ,op ,args)]) ,body)
       (match-define (list temp_body free_vars temp_procs) (bottomup-convert body procs))

       (define final_vars_set (set-remove (set-add free_vars args) lhs))

       (list `(let ([,lhs (apply-prim ,op ,args)]) ,temp_body)
             final_vars_set
             temp_procs)]

      [`(let ([,lhs (λ ,(? symbol? args) ,lam-body)]) ,let-body)
       (define code_ptr (gensym 'ptr))
       (define env_name (gensym 'env))

       (match-define (list temp_body1 free_let_vars temp_procs1) (bottomup-convert let-body procs))

       (match-define (list temp_body2 free_lam_vars temp_procs2) (bottomup-convert lam-body temp_procs1))

       ;AE ::= ... | (λ env_x args_x E) | (λ env_x (x ...) E)
       ;Proc ::= ... | (proc name env_x args_x E) | (proc name env_x (x ...) E)

       (define final_env_vars (set-subtract free_lam_vars (set args)))
       (define sorted_env_vars (set->list final_env_vars))

       (define new-body (get-new-proc-body sorted_env_vars temp_body2 env_name))

       (define combined_args (set-union free_let_vars final_env_vars))
       (define final_vars_set (set-remove combined_args lhs))

       (list `(let ([,lhs (new-closure ,code_ptr ,@sorted_env_vars)]) ,temp_body1)
             final_vars_set
             (cons `(proc ,code_ptr ,env_name ,args ,new-body) temp_procs2))]

      [`(let ([,lhs (λ (,args ...) ,lam-body)]) ,let-body)
       (define code_ptr (gensym 'ptr))
       (define env_name (gensym 'env))

       (match-define (list temp_body1 free_let_vars temp_procs1) (bottomup-convert let-body procs))

       (match-define (list temp_body2 free_lam_vars temp_procs2) (bottomup-convert lam-body temp_procs1))

       (define final_env_vars (set-subtract free_lam_vars (list->set args)))
       (define sorted_env_vars (set->list final_env_vars))

       (define new-body (get-new-proc-body sorted_env_vars temp_body2 env_name))

       (define combined_args (set-union free_let_vars final_env_vars))
       (define final_vars_set (set-remove combined_args lhs))

       ;  (displayln (~a "letvars: " free_let_vars))
       ;  (displayln (~a "free_lam_vars " free_lam_vars))
       ;  (displayln (~a "final_vars_set: " final_vars_set))
       ;  (displayln (~a "sorted_env_vars " sorted_env_vars))
       ;  (displayln (~a "args " (list->set args)))

       ;  (list `(let ([,lhs (new-closure ,code_ptr ,@(set->list final_vars_set))]) ,temp_body1)
       (list `(let ([,lhs (new-closure ,code_ptr ,@sorted_env_vars)]) ,temp_body1)
             final_vars_set
             (cons `(proc ,code_ptr ,env_name (,@args) ,new-body)  temp_procs2))]

      [`(let ([,lhs ,val]) ,body)
       (match-define (list temp_body free_vars temp_procs) (bottomup-convert body procs))

       (define final_vars_set (set-remove free_vars lhs))
       (list `(let ([,lhs ,val]) ,temp_body) final_vars_set temp_procs)]

      [`(if ,grd ,texp ,fexp)
       (match-define (list texp-body texp-free texp-procs) (bottomup-convert texp procs))
       (match-define (list fexp-body fexp-free fexp-procs) (bottomup-convert fexp texp-procs))

       (define final_vars_set (set-union fexp-free texp-free (set grd)))

       (list `(if ,grd ,texp-body ,fexp-body)
             final_vars_set
             fexp-procs)]

      [`(apply ,f ,args)
       (define final_vars_set (list->set (cons f (cons args '()))))
       (list `(app-clo ,f ,args) final_vars_set procs)]

      #;[`(,f ,es ...)
         (define final_vars_set (list->set (cons f es)))
         (list `(app-clo ,f ,@es) final_vars_set procs)]

      [_ (error (format "unknown expression '~a" ex))]
      ))

  (define let_bounded_prog (let-bound-program exp))
  (define lam_simplified_prog (simplify-λ let_bounded_prog))
  ; (pretty-print let_bounded_prog)
  ; (pretty-print lam_simplified_prog)



  (match-define (list root_body free_vars procs) (bottomup-convert lam_simplified_prog))
  ; (define let_bounded_prog (let-bound-program (cps-convert (anf-convert (desugar (add-prims-to-prog exp))))))
  ; (pretty-print let_bounded_prog)

  ; (match-define (list root_body free_vars procs) (bottomup-convert (simplify-λ let_bounded_prog)))

  ; (pretty-print (let-bound-program exp))
  ; (pretty-print (simplify-λ (let-bound-program exp)))
  ; (when (not (set-empty? free_vars)) (displayln `(root_fv: ,free_vars)))
  (cons `(proc root ,(gensym 'rootenv) ,(gensym 'rootarg) ,root_body) procs)
  )


;;; tests
(define example
  '(let ([d 2])
     (let ([c (λ (x) (x))])
       (let ([f (λ (b d) (+ d e b))])
         (f k)))))
; (pretty-print (closure-convert example))

(define example1
  '(let ([a 6])
     (let ([d '2])
       (let ([e '3])
         (let ([c (λ (x) (+ x a d))])
           (let ([f (λ (a b) (c (+ e d a b)))])
             (f 4 5)))))))

; (pretty-print (closure-convert example1))

(define example2
  '(let ([a '6])
     (let ([d '2])
       (let ([e '3])
         (let ([c (λ (x) (+ x a d))])
           (let ([f (λ (a b) (+ e d a b))])
             (f 4 5)))))))

; (pretty-print (closure-convert example2))
; (pretty-print (closure-convert '(+ 1 2)))

; (pretty-print (closure-convert (cps-convert (anf-convert (desugar (add-prims-to-prog '(+ 1 2 3 4)))))))
; (pretty-print (closure-convert (cps-convert (anf-convert (desugar (add-prims-to-prog example2))))))

(define example3
  '(let ((* (λ args
              (let ((kkont3042 (prim car args)))
                (let ((args (prim cdr args)))
                  (let ((prm3043 (apply-prim * args)))
                    (kkont3042 prm3043 prm3043)))))))

     (* 2 5)))
; (pretty-print (closure-convert example3))

(define example4
  '(let ((*
          (λ args
            (let ((kkont3042 (prim car args)))
              (let ((args (prim cdr args)))
                (let ((prm3043 (apply-prim * args)))
                  (kkont3042 '() prm3043)))))))
     (let ((+
            (λ args
              (let ((kkont3044 (prim car args)))
                (let ((args (prim cdr args)))
                  (let ((prm3045 (apply-prim + args)))
                    (kkont3044 '() prm3045)))))))
       ((λ (kont3051 x) (x kont3051 x))
        (λ (letk3046 Ycomb)
          (Ycomb
           (λ (letk3047 halt) (+ halt 2 3))
           (λ (kont3048 halt)
             (kont3048
              '()
              (λ args
                (let ((kkont3049 (prim car args)))
                  (let ((args (prim cdr args)))
                    (let ((prm3050 (apply-prim halt args)))
                      (kkont3049 '() prm3050)))))))))
        #;(λ (kont3052 g)
            (kont3052
             '()
             (λ (kont3053 f)
               (f
                kont3053
                (λ vs
                  (let ((kkont3054 (prim car vs)))
                    (let ((vs (prim cdr vs)))
                      (g
                       (λ (letk3055 t3040)
                         (t3040
                          (λ (letk3056 t3041)
                            (let ((lst3057 (prim cons kkont3054 vs)))
                              (apply t3041 lst3057)))
                          f))
                       g)))))))))
       )))
; (pretty-print (closure-convert example4))


; (pretty-print (closure-convert (cps-convert (anf-convert (desugar (add-prims-to-prog '(+ 2 3)))))))
; (pretty-print (add-prims-to-prog example))
; (pretty-print (desugar (add-prims-to-prog example)))
; (pretty-print (anf-convert (desugar (add-prims-to-prog example))))
; (pretty-print (cps-convert (anf-convert (desugar (add-prims-to-prog example)))))
; (pretty-print (closure-convert (cps-convert (anf-convert (desugar (add-prims-to-prog example))))))
; (pretty-print (closure-convert (cps-convert (anf-convert (desugar (add-prims-to-prog example))))))
; (pretty-print (cps-convert (anf-convert (desugar (add-prims-to-prog '(+ 2 3))))))


