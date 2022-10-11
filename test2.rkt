#lang racket

(let ((Ycomb ((λ (x) (x x)) (λ (g) (λ (f) (f (λ vs (apply ((g g) f) vs))))))))
  (let ((append*
         (Ycomb
          (λ (append*)
            (λ (lhs rhs)
              (if (null? lhs) rhs (cons (first lhs) (append* (rest lhs) rhs))))))))
    (let ((map2
           (Ycomb
            (λ (map)
              (λ (op lst)
                (if (null? lst) null (cons (op (car lst)) (map op (cdr lst)))))))))
      (let ((ormap
             (Ycomb
              (λ (ormap)
                (λ (op . lst)
                  (let loop ((lst lst))
                    (if (let ((or2702616 (null? lst)))
                          (if or2702616 or2702616 (null? (car lst))))
                        false
                        (if (= 0 (length (cdar lst)))
                            (apply op (map car lst))
                            (if (equal? false (if (apply op (map car lst)) #f #t))
                                (apply op (map car lst))
                                (loop (map cdr lst)))))))))))
        (let ((andmap
               (Ycomb
                (λ (andmap)
                  (λ (op . lst)
                    (let loop ((lst lst))
                      (if (let ((or2702617 (null? lst)))
                            (if or2702617 or2702617 (null? (car lst))))
                          true
                          (if (= 0 (length (cdar lst)))
                              (apply op (map car lst))
                              (if (equal? false (apply op (map car lst)))
                                  false
                                  (loop (map cdr lst)))))))))))
          (let ((foldr
                 (Ycomb
                  (λ (foldr)
                    (λ (f acc . lsts)
                      (if (ormap null? lsts)
                          acc
                          (let ((xs (map car lsts)))
                            (let ((rsts (map cdr lsts)))
                              (let ((acc+ (apply foldr `(,f ,acc ,@rsts))))
                                (apply f (append* xs `(,acc+))))))))))))
            (let ((foldl
                   (Ycomb
                    (λ (foldl)
                      (λ (f acc . lsts)
                        (if (ormap null? lsts)
                            acc
                            (let ((xs (map car lsts)))
                              (let ((rsts (map cdr lsts)))
                                (let ((acc+ (apply f (append* xs `(,acc)))))
                                  (apply foldl `(,f ,acc+ ,@rsts)))))))))))
              (let ((reverse
                     (Ycomb
                      (λ (reverse)
                        (λ (lst)
                          (if (null? lst)
                              lst
                              (append* (reverse (cdr lst)) `(,(car lst)))))))))
                (let ((append
                       (Ycomb
                        (λ (append)
                          (λ (xs . x)
                            (foldl append* null (reverse (append* `(,xs) x))))))))
                  (reverse (list 1 2 3))
                  ;(foldl + 0 '(1 2 3))
                  ;(map + (list 1 2))
                  ;(map + (list 1 2) (list 1 2) (list 1 5))
                  )))))))))




(let ((Ycomb ((λ (x) (x x)) (λ (g) (λ (f) (f (λ vs (apply ((g g) f) vs))))))))
  (let ((append*
         (Ycomb
          (λ (append*)
            (λ (lhs rhs)
              (if (null? lhs) rhs (cons (first lhs) (append* (rest lhs) rhs))))))))
    (let ((map2
           (Ycomb
            (λ (map)
              (λ (op lst)
                (if (null? lst) null (cons (op (car lst)) (map op (cdr lst)))))))))
      
      (let ((foldr
             (Ycomb
              (λ (foldr)
                (λ (f acc . lsts)
                  (if (ormap null? lsts)
                      acc
                      (let ((xs (map car lsts)))
                        (let ((rsts (map cdr lsts)))
                          (let ((acc+ (apply foldr `(,f ,acc ,@rsts))))
                            (apply f (append* xs `(,acc+))))))))))))
        (let ((foldl
               (Ycomb
                (λ (foldl)
                  (λ (f acc . lsts)
                    (if (ormap null? lsts)
                        acc
                        (let ((xs (map car lsts)))
                          (let ((rsts (map cdr lsts)))
                            (let ((acc+ (apply f (append* xs `(,acc)))))
                              (apply foldl `(,f ,acc+ ,@rsts)))))))))))
          (let ((reverse
                 (Ycomb
                  (λ (reverse)
                    (λ (lst)
                      (if (null? lst)
                          lst
                          (append* (reverse (cdr lst)) `(,(car lst)))))))))
            (let ((append
                   (Ycomb
                    (λ (append)
                      (λ (xs . x)
                        (foldl append* null (reverse (append* `(,xs) x))))))))
              (reverse (list 1 2 3))
              ;(foldl + 0 '(1 2 3))
              ;(map + (list 1 2))
              ;(map + (list 1 2) (list 1 2) (list 1 5))
              )))))))




(let ((Ycomb ((λ (x) (x x)) (λ (g) (λ (f) (f (λ vs (apply ((g g) f) vs))))))))
  (let ((append*
         (Ycomb
          (λ (append*)
            (λ (lhs rhs)
              (if (null? lhs) rhs (cons (first lhs) (append* (rest lhs) rhs))))))))
    (let ((map2
           (Ycomb
            (λ (map)
              (λ (op lst)
                (if (null? lst) null (cons (op (car lst)) (map op (cdr lst)))))))))
      (let ((ormap
             (Ycomb
              (λ (ormap)
                (λ (op . lst)
                  (let loop ((lst lst))
                    (if (let ((or4070750 (null? lst)))
                          (if or4070750 or4070750 (null? (car lst))))
                        false
                        (if (= 0 (length (cdar lst)))
                            (apply op (map car lst))
                            (if (equal? false (if (apply op (map car lst)) #f #t))
                                (apply op (map car lst))
                                (loop (map cdr lst)))))))))))
        (let ((andmap
               (Ycomb
                (λ (andmap)
                  (λ (op . lst)
                    (let loop ((lst lst))
                      (if (let ((or4070751 (null? lst)))
                            (if or4070751 or4070751 (null? (car lst))))
                          true
                          (if (= 0 (length (cdar lst)))
                              (apply op (map car lst))
                              (if (equal? false (apply op (map car lst)))
                                  false
                                  (loop (map cdr lst)))))))))))
          (let ((foldr
                 (Ycomb
                  (λ (foldr)
                    (λ (f acc . lsts)
                      (if (ormap null? lsts)
                          acc
                          (let ((xs (map car lsts)))
                            (let ((rsts (map cdr lsts)))
                              (let ((acc+
                                     (apply foldr (cons f (cons acc (append* rsts '()))))))
                                (apply f (append* xs (cons acc+ '()))))))))))))
            (let ((foldl
                   (Ycomb
                    (λ (foldl)
                      (λ (f acc . lsts)
                        (if (ormap null? lsts)
                            acc
                            (let ((xs (map car lsts)))
                              (let ((rsts (map cdr lsts)))
                                (let ((acc+ (apply f (append* xs (cons acc '())))))
                                  (apply
                                   foldl
                                   (cons f (cons acc+ (append* rsts '())))))))))))))
              (let ((reverse
                     (Ycomb
                      (λ (reverse)
                        (λ (lst)
                          (if (null? lst)
                              lst
                              (append* (reverse (cdr lst)) (cons (car lst) '()))))))))
                (let ((append
                       (Ycomb
                        (λ (append)
                          (λ (xs . x)
                            (foldl append* null (reverse (append* (cons xs '()) x))))))))
                  (apply + (list 1 3 4)))))))))))




(let ((Ycomb
        ((λ (x) (x x))
         (λ (g)
           (λ (f)
             (f (λ vs (let ((t4126583 (g g))) (let ((t4126584 (t4126583 f))) (apply t4126584 vs))))))))))
   (let ((append*
          (Ycomb
           (λ (append*)
             (λ (lhs rhs)
               (let ((t4126585 (null? lhs)))
                 (if t4126585
                   rhs
                   (let ((t4126586 (first lhs)))
                     (let ((t4126587 (rest lhs)))
                       (let ((t4126588 (append* t4126587 rhs))) (cons t4126586 t4126588)))))))))))
     (let ((map2
            (Ycomb
             (λ (map)
               (λ (op lst)
                 (let ((t4126589 (null? lst)))
                   (if t4126589
                     null
                     (let ((t4126590 (car lst)))
                       (let ((t4126591 (op t4126590)))
                         (let ((t4126592 (cdr lst)))
                           (let ((t4126593 (map op t4126592))) (cons t4126591 t4126593))))))))))))
       (let ((ormap
              (Ycomb
               (λ (ormap)
                 (λ (op . lst)
                   (let loop ((lst lst))
                     (let ((t4126595
                            (let ((or4070750 (null? lst)))
                              (if or4070750 or4070750 (let ((t4126594 (car lst))) (null? t4126594))))))
                       (if t4126595
                         false
                         (let ((t4126596 (cdar lst)))
                           (let ((t4126597 (length t4126596)))
                             (let ((t4126598 (= 0 t4126597)))
                               (if t4126598
                                 (let ((t4126599 (map car lst))) (apply op t4126599))
                                 (let ((t4126600 (map car lst)))
                                   (let ((t4126601 (apply op t4126600)))
                                     (let ((t4126602 (if t4126601 #f #t)))
                                       (let ((t4126603 (equal? false t4126602)))
                                         (if t4126603
                                           (let ((t4126604 (map car lst))) (apply op t4126604))
                                           (let ((t4126605 (map cdr lst)))
                                             (loop t4126605)))))))))))))))))))
         (let ((andmap
                (Ycomb
                 (λ (andmap)
                   (λ (op . lst)
                     (let loop ((lst lst))
                       (let ((t4126607
                              (let ((or4070751 (null? lst)))
                                (if or4070751 or4070751 (let ((t4126606 (car lst))) (null? t4126606))))))
                         (if t4126607
                           true
                           (let ((t4126608 (cdar lst)))
                             (let ((t4126609 (length t4126608)))
                               (let ((t4126610 (= 0 t4126609)))
                                 (if t4126610
                                   (let ((t4126611 (map car lst))) (apply op t4126611))
                                   (let ((t4126612 (map car lst)))
                                     (let ((t4126613 (apply op t4126612)))
                                       (let ((t4126614 (equal? false t4126613)))
                                         (if t4126614
                                           false
                                           (let ((t4126615 (map cdr lst))) (loop t4126615))))))))))))))))))
           (let ((foldr
                  (Ycomb
                   (λ (foldr)
                     (λ (f acc . lsts)
                       (let ((t4126616 (ormap null? lsts)))
                         (if t4126616
                           acc
                           (let ((xs (map car lsts)))
                             (let ((rsts (map cdr lsts)))
                               (let ((acc+
                                      (let ((t4126617 (append* rsts '())))
                                        (let ((t4126618 (cons acc t4126617)))
                                          (let ((t4126619 (cons f t4126618))) (apply foldr t4126619))))))
                                 (let ((t4126620 (cons acc+ '())))
                                   (let ((t4126621 (append* xs t4126620))) (apply f t4126621)))))))))))))
             (let ((foldl
                    (Ycomb
                     (λ (foldl)
                       (λ (f acc . lsts)
                         (let ((t4126622 (ormap null? lsts)))
                           (if t4126622
                             acc
                             (let ((xs (map car lsts)))
                               (let ((rsts (map cdr lsts)))
                                 (let ((acc+
                                        (let ((t4126623 (cons acc '())))
                                          (let ((t4126624 (append* xs t4126623))) (apply f t4126624)))))
                                   (let ((t4126625 (append* rsts '())))
                                     (let ((t4126626 (cons acc+ t4126625)))
                                       (let ((t4126627 (cons f t4126626)))
                                         (apply foldl t4126627))))))))))))))
               (let ((reverse
                      (Ycomb
                       (λ (reverse)
                         (λ (lst)
                           (let ((t4126628 (null? lst)))
                             (if t4126628
                               lst
                               (let ((t4126629 (cdr lst)))
                                 (let ((t4126630 (reverse t4126629)))
                                   (let ((t4126631 (car lst)))
                                     (let ((t4126632 (cons t4126631 '())))
                                       (append* t4126630 t4126632))))))))))))
                 (let ((append
                        (Ycomb
                         (λ (append)
                           (λ (xs . x)
                             (let ((t4126633 (cons xs '())))
                               (let ((t4126634 (append* t4126633 x)))
                                 (let ((t4126635 (reverse t4126634))) (foldl append* null t4126635)))))))))
                   (let ((t4126636 (list 1 3 4))) (apply + t4126636)))))))))))









#;(let ((Ycomb
         ((λ (x) (x x))
          (λ (g)
            (λ (f)
              (f (λ vs (let ((t2824924 (g g))) (let ((t2824925 (t2824924 f))) (apply t2824925 vs))))))))))
    (let ((append*
           (Ycomb
            (λ (append*)
              (λ (lhs rhs)
                (let ((t2824926 (null? lhs)))
                  (if t2824926
                      rhs
                      (let ((t2824927 (first lhs)))
                        (let ((t2824928 (rest lhs)))
                          (let ((t2824929 (append* t2824928 rhs))) (cons t2824927 t2824929)))))))))))
      (let ((map2
             (Ycomb
              (λ (map)
                (λ (op lst)
                  (let ((t2824930 (null? lst)))
                    (if t2824930
                        null
                        (let ((t2824931 (car lst)))
                          (let ((t2824932 (op t2824931)))
                            (let ((t2824933 (cdr lst)))
                              (let ((t2824934 (map op t2824933))) (cons t2824932 t2824934))))))))))))
        (let ((foldr
               (Ycomb
                (λ (foldr)
                  (λ (f acc . lsts)
                    (let ((t2824935 (ormap null? lsts)))
                      (if t2824935
                          acc
                          (let ((xs (map car lsts)))
                            (let ((rsts (map cdr lsts)))
                              (let ((t2824936 ,f))
                                (let ((t2824937 ,acc))
                                  (let ((t2824938 ,@rsts))
                                    (let ((t2824939 (t2824936 t2824937 t2824938)))
                                      (let ((t2824940 `t2824939))
                                        (let ((acc+ (apply foldr t2824940)))
                                          (let ((t2824941 ,acc+))
                                            (let ((t2824942 (t2824941)))
                                              (let ((t2824943 `t2824942))
                                                (let ((t2824944 (append* xs t2824943)))
                                                  (apply f t2824944))))))))))))))))))))
          (let ((foldl
                 (Ycomb
                  (λ (foldl)
                    (λ (f acc . lsts)
                      (let ((t2824945 (ormap null? lsts)))
                        (if t2824945
                            acc
                            (let ((xs (map car lsts)))
                              (let ((rsts (map cdr lsts)))
                                (let ((t2824946 ,acc))
                                  (let ((t2824947 (t2824946)))
                                    (let ((t2824948 `t2824947))
                                      (let ((t2824949 (append* xs t2824948)))
                                        (let ((acc+ (apply f t2824949)))
                                          (let ((t2824950 ,f))
                                            (let ((t2824951 ,acc+))
                                              (let ((t2824952 ,@rsts))
                                                (let ((t2824953 (t2824950 t2824951 t2824952)))
                                                  (let ((t2824954 `t2824953))
                                                    (apply foldl t2824954))))))))))))))))))))
            (let ((reverse
                   (Ycomb
                    (λ (reverse)
                      (λ (lst)
                        (let ((t2824955 (null? lst)))
                          (if t2824955
                              lst
                              (let ((t2824956 (cdr lst)))
                                (let ((t2824957 (reverse t2824956)))
                                  (let ((t2824958 (car lst)))
                                    (let ((t2824959 ,t2824958))
                                      (let ((t2824960 (t2824959)))
                                        (let ((t2824961 `t2824960)) (append* t2824957 t2824961))))))))))))))
              (let ((append
                     (Ycomb
                      (λ (append)
                        (λ (xs . x)
                          (let ((t2824962 ,xs))
                            (let ((t2824963 (t2824962)))
                              (let ((t2824964 `t2824963))
                                (let ((t2824965 (append* t2824964 x)))
                                  (let ((t2824966 (reverse t2824965)))
                                    (foldl append* null t2824966)))))))))))
                (let ((t2824967 (list 1 2 3))) (reverse t2824967)))))))))


#;(let ((Ycomb
         ((λ (x) (x x))
          (λ (g) (λ (f) (f (λ vs (let ((t2795246 (g g))) (let ((t2795247 (t2795246 f))) (apply t2795247 vs))))))))))
    (let ((append*
           (Ycomb
            (λ (append*)
              (λ (lhs rhs)
                (let ((t2795248 (null? lhs)))
                  (if t2795248
                      rhs
                      (let ((t2795249 (first lhs)))
                        (let ((t2795250 (rest lhs)))
                          (let ((t2795251 (append* t2795250 rhs))) (cons t2795249 t2795251)))))))))))
      (let ((map2
             (Ycomb
              (λ (map)
                (λ (op lst)
                  (let ((t2795252 (null? lst)))
                    (if t2795252
                        null
                        (let ((t2795253 (car lst)))
                          (let ((t2795254 (op t2795253)))
                            (let ((t2795255 (cdr lst)))
                              (let ((t2795256 (map op t2795255))) (cons t2795254 t2795256))))))))))))
        (let ((ormap
               (Ycomb
                (λ (ormap)
                  (λ (op . lst)
                    (let ((t2795257 (lst lst)))
                      (let ((t2795258 (t2795257)))
                        (let ((or2702616 (null? lst)))
                          (let ((t2795260 (if or2702616 or2702616 (let ((t2795259 (car lst))) (null? t2795259)))))
                            (let ((t2795271
                                   (if t2795260
                                       false
                                       (let ((t2795261 (cdar lst)))
                                         (let ((t2795262 (length t2795261)))
                                           (let ((t2795263 (= 0 t2795262)))
                                             (if t2795263
                                                 (let ((t2795264 (map car lst))) (apply op t2795264))
                                                 (let ((t2795265 (map car lst)))
                                                   (let ((t2795266 (apply op t2795265)))
                                                     (let ((t2795267 (if t2795266 #f #t)))
                                                       (let ((t2795268 (equal? false t2795267)))
                                                         (if t2795268
                                                             (let ((t2795269 (map car lst))) (apply op t2795269))
                                                             (let ((t2795270 (map cdr lst))) (loop t2795270))))))))))))))
                              (let loop t2795258 t2795271)))))))))))
          (let ((andmap
                 (Ycomb
                  (λ (andmap)
                    (λ (op . lst)
                      (let ((t2795272 (lst lst)))
                        (let ((t2795273 (t2795272)))
                          (let ((or2702617 (null? lst)))
                            (let ((t2795275 (if or2702617 or2702617 (let ((t2795274 (car lst))) (null? t2795274)))))
                              (let ((t2795284
                                     (if t2795275
                                         true
                                         (let ((t2795276 (cdar lst)))
                                           (let ((t2795277 (length t2795276)))
                                             (let ((t2795278 (= 0 t2795277)))
                                               (if t2795278
                                                   (let ((t2795279 (map car lst))) (apply op t2795279))
                                                   (let ((t2795280 (map car lst)))
                                                     (let ((t2795281 (apply op t2795280)))
                                                       (let ((t2795282 (equal? false t2795281)))
                                                         (if t2795282
                                                             false
                                                             (let ((t2795283 (map cdr lst))) (loop t2795283)))))))))))))
                                (let loop t2795273 t2795284)))))))))))
            (let ((foldr
                   (Ycomb
                    (λ (foldr)
                      (λ (f acc . lsts)
                        (let ((t2795285 (ormap null? lsts)))
                          (if t2795285
                              acc
                              (let ((xs (map car lsts)))
                                (let ((rsts (map cdr lsts)))
                                  (let ((t2795286 ,f))
                                    (let ((t2795287 ,acc))
                                      (let ((t2795288 ,@rsts))
                                        (let ((t2795289 (t2795286 t2795287 t2795288)))
                                          (let ((t2795290 `t2795289))
                                            (let ((acc+ (apply foldr t2795290)))
                                              (let ((t2795291 ,acc+))
                                                (let ((t2795292 (t2795291)))
                                                  (let ((t2795293 `t2795292))
                                                    (let ((t2795294 (append* xs t2795293)))
                                                      (apply f t2795294))))))))))))))))))))
              (let ((foldl
                     (Ycomb
                      (λ (foldl)
                        (λ (f acc . lsts)
                          (let ((t2795295 (ormap null? lsts)))
                            (if t2795295
                                acc
                                (let ((xs (map car lsts)))
                                  (let ((rsts (map cdr lsts)))
                                    (let ((t2795296 ,acc))
                                      (let ((t2795297 (t2795296)))
                                        (let ((t2795298 `t2795297))
                                          (let ((t2795299 (append* xs t2795298)))
                                            (let ((acc+ (apply f t2795299)))
                                              (let ((t2795300 ,f))
                                                (let ((t2795301 ,acc+))
                                                  (let ((t2795302 ,@rsts))
                                                    (let ((t2795303 (t2795300 t2795301 t2795302)))
                                                      (let ((t2795304 `t2795303)) (apply foldl t2795304))))))))))))))))))))
                (let ((reverse
                       (Ycomb
                        (λ (reverse)
                          (λ (lst)
                            (let ((t2795305 (null? lst)))
                              (if t2795305
                                  lst
                                  (let ((t2795306 (cdr lst)))
                                    (let ((t2795307 (reverse t2795306)))
                                      (let ((t2795308 (car lst)))
                                        (let ((t2795309 ,t2795308))
                                          (let ((t2795310 (t2795309)))
                                            (let ((t2795311 `t2795310)) (append* t2795307 t2795311))))))))))))))
                  (let ((append
                         (Ycomb
                          (λ (append)
                            (λ (xs . x)
                              (let ((t2795312 ,xs))
                                (let ((t2795313 (t2795312)))
                                  (let ((t2795314 `t2795313))
                                    (let ((t2795315 (append* t2795314 x)))
                                      (let ((t2795316 (reverse t2795315))) (foldl append* null t2795316)))))))))))
                    (let ((t2795317 (list 1 2 3))) (reverse t2795317)))))))))))







#;(let ((null? (λ args (apply-prim null? args))))
    (let ((equal? (λ args (apply-prim equal? args))))
      (let ((list (λ args (apply-prim list args))))
        (let ((cons (λ args (apply-prim cons args))))
          (let ((cdr (λ args (apply-prim cdr args))))
            (let ((car (λ args (apply-prim car args))))
              (let ((< (λ args (apply-prim < args))))
                (let ((> (λ args (apply-prim > args))))
                  (let ((= (λ args (apply-prim = args))))
                    (let ((expt (λ args (apply-prim expt args))))
                      (let ((/ (λ args (apply-prim / args))))
                        (let ((- (λ args (apply-prim - args))))
                          (let ((+ (λ args (apply-prim + args))))
                            (let ((* (λ args (apply-prim * args))))

                              (let ((Ycomb ((λ (x) (x x)) (λ (g) (λ (f) (f (λ vs (apply ((g g) f) vs))))))))
                                (let ((append*
                                       (Ycomb
                                        (λ (append*)
                                          (λ (lhs rhs)
                                            (if (null? lhs) rhs (cons (first lhs) (append* (rest lhs) rhs))))))))
                                  (let ((map2
                                         (Ycomb
                                          (λ (map)
                                            (λ (op lst)
                                              (if (null? lst) null (cons (op (car lst)) (map op (cdr lst)))))))))
                                    (let ((ormap
                                           (Ycomb
                                            (λ (ormap)
                                              (λ (op . lst)
                                                (let loop ((lst lst))
                                                  (if (let ((or2702616 (null? lst)))
                                                        (if or2702616 or2702616 (null? (car lst))))
                                                      false
                                                      (if (= 0 (length (cdar lst)))
                                                          (apply op (map car lst))
                                                          (if (equal? false (if (apply op (map car lst)) #f #t))
                                                              (apply op (map car lst))
                                                              (loop (map cdr lst)))))))))))
                                      (let ((andmap
                                             (Ycomb
                                              (λ (andmap)
                                                (λ (op . lst)
                                                  (let loop ((lst lst))
                                                    (if (let ((or2702617 (null? lst)))
                                                          (if or2702617 or2702617 (null? (car lst))))
                                                        true
                                                        (if (= 0 (length (cdar lst)))
                                                            (apply op (map car lst))
                                                            (if (equal? false (apply op (map car lst)))
                                                                false
                                                                (loop (map cdr lst)))))))))))
                                        (let ((foldr
                                               (Ycomb
                                                (λ (foldr)
                                                  (λ (f acc . lsts)
                                                    (if (ormap null? lsts)
                                                        acc
                                                        (let ((xs (map car lsts)))
                                                          (let ((rsts (map cdr lsts)))
                                                            (let ((acc+ (apply foldr `(,f ,acc ,@rsts))))
                                                              (apply f (append* xs `(,acc+))))))))))))
                                          (let ((foldl
                                                 (Ycomb
                                                  (λ (foldl)
                                                    (λ (f acc . lsts)
                                                      (if (ormap null? lsts)
                                                          acc
                                                          (let ((xs (map car lsts)))
                                                            (let ((rsts (map cdr lsts)))
                                                              (let ((acc+ (apply f (append* xs `(,acc)))))
                                                                (apply foldl `(,f ,acc+ ,@rsts)))))))))))
                                            (let ((reverse
                                                   (Ycomb
                                                    (λ (reverse)
                                                      (λ (lst)
                                                        (if (null? lst)
                                                            lst
                                                            (append* (reverse (cdr lst)) `(,(car lst)))))))))
                                              (let ((append
                                                     (Ycomb
                                                      (λ (append)
                                                        (λ (xs . x)
                                                          (foldl append* null (reverse (append* `(,xs) x))))))))
                                                (reverse (list 1 2 3))
                                                ;(foldl + 0 '(1 2 3))
                                                ;(map + (list 1 2))
                                                ;(map + (list 1 2) (list 1 2) (list 1 5))
                                                )))))))))

                              ))))))))))))))