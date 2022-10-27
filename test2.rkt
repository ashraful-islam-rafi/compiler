#lang racket

(define Ycomb ((λ (x) (x x))
               (λ (g) (λ (f)
                        (f (λ vs
                             (apply ((g g) f) vs)))))))

;(define halt (void))

#;(let ((f
       (Ycomb
        (λ (f)
          (λ (n)
            (let ((t1024937 (= n 0)))
              (if t1024937
                  1
                  (let ((t1024938 (- n 1)))
                    (let ((t1024939 (f t1024938)))
                      (* n t1024939))))))))))
  (f 5))


#;(Ycomb
  (lambda (_1076143 f)
    (f (lambda (_0 x) (let ((_1 (halt x))) (_1 _1))) 5))
  (lambda (cont1076144 f)
    (cont1076144
     '()
     (lambda (cont1076145 n)
       (=
        (lambda (_1076146 t374623)
          (if t374623
            (cont1076145 '() 1)
            (-
             (lambda (_1076151 t374624)
               (f
                (lambda (_1076152 t374625)
                  (* cont1076145 n t374625))
                t374624))
             n
             1)))
        n
        0)))))

#;(let ((Ycomb
         ((λ (x) (x x))
          (λ (g)
            (λ (f)
              (f
               (λ vs
                 (let ((t1024859 (g g)))
                   (let ((t1024860 (t1024859 f)))
                     (apply t1024860 vs))))))))))
    (let ((append1
           (Ycomb
            (λ (append1)
              (λ (lhs rhs)
                (let ((t1024861 (null? lhs)))
                  (if t1024861
                      rhs
                      (let ((t1024862 (first lhs)))
                        (let ((t1024863 (rest lhs)))
                          (let ((t1024864 (append1 t1024863 rhs)))
                            (cons t1024862 t1024864)))))))))))
      (let ((map1
             (Ycomb
              (λ (map1)
                (λ (op lst)
                  (let ((t1024865 (null? lst)))
                    (if t1024865
                        null
                        (let ((t1024866 (car lst)))
                          (let ((t1024867 (op t1024866)))
                            (let ((t1024868 (cdr lst)))
                              (let ((t1024869 (map1 op t1024868)))
                                (cons t1024867 t1024869))))))))))))
        (let ((map
               (Ycomb
                (λ (map)
                  (λ param-lst1024851
                    (let ((t1024870 (length '(param-lst1024851))))
                      (let ((t1024871 (< 2 t1024870)))
                        (if t1024871
                            (raise "invalid parameter list!")
                            (let ((op (car param-lst1024851)))
                              (let ((param-lst1024851
                                     (cdr param-lst1024851)))
                                (let ((lst1 (car param-lst1024851)))
                                  (let ((param-lst1024851
                                         (cdr param-lst1024851)))
                                    (let ((list-of-lists
                                           param-lst1024851))
                                      (let ((combined_lst
                                             (cons lst1 list-of-lists)))
                                        (let ((t1024872
                                               (car combined_lst)))
                                          (let ((t1024873
                                                 (null? t1024872)))
                                            (if t1024873
                                                null
                                                (let ((t1024874
                                                       (map1
                                                        car
                                                        combined_lst)))
                                                  (let ((t1024875
                                                         (apply
                                                          op
                                                          t1024874)))
                                                    (let ((t1024876
                                                           (map1
                                                            cdr
                                                            combined_lst)))
                                                      (let ((t1024877
                                                             (apply
                                                              map
                                                              op
                                                              t1024876)))
                                                        (cons
                                                         t1024875
                                                         t1024877))))))))))))))))))))))
          (let ((ormap
                 (Ycomb
                  (λ (ormap)
                    (λ param-lst1024852
                      (let ((t1024878 (length '(param-lst1024852))))
                        (let ((t1024879 (< 1 t1024878)))
                          (if t1024879
                              (raise "invalid parameter list!")
                              (let ((op (car param-lst1024852)))
                                (let ((param-lst1024852
                                       (cdr param-lst1024852)))
                                  (let ((lst param-lst1024852))
                                    (let loop ((lst lst))
                                      (let ((t1024881
                                             (let ((or1024853
                                                    (null? lst)))
                                               (if or1024853
                                                   or1024853
                                                   (let ((t1024880
                                                          (car lst)))
                                                     (null? t1024880))))))
                                        (if t1024881
                                            false
                                            (let ((t1024882 (cdar lst)))
                                              (let ((t1024883
                                                     (length t1024882)))
                                                (let ((t1024884
                                                       (= 0 t1024883)))
                                                  (if t1024884
                                                      (let ((t1024885
                                                             (map car lst)))
                                                        (apply op t1024885))
                                                      (let ((t1024886
                                                             (map car lst)))
                                                        (let ((t1024887
                                                               (apply
                                                                op
                                                                t1024886)))
                                                          (let ((t1024888
                                                                 (if t1024887
                                                                     #f
                                                                     #t)))
                                                            (let ((t1024889
                                                                   (equal?
                                                                    false
                                                                    t1024888)))
                                                              (if t1024889
                                                                  (let ((t1024890
                                                                         (map
                                                                          car
                                                                          lst)))
                                                                    (apply
                                                                     op
                                                                     t1024890))
                                                                  (let ((t1024891
                                                                         (map
                                                                          cdr
                                                                          lst)))
                                                                    (loop
                                                                     t1024891)))))))))))))))))))))))))
            (let ((andmap
                   (Ycomb
                    (λ (andmap)
                      (λ param-lst1024854
                        (let ((t1024892 (length '(param-lst1024854))))
                          (let ((t1024893 (< 1 t1024892)))
                            (if t1024893
                                (raise "invalid parameter list!")
                                (let ((op (car param-lst1024854)))
                                  (let ((param-lst1024854
                                         (cdr param-lst1024854)))
                                    (let ((lst param-lst1024854))
                                      (let loop ((lst lst))
                                        (let ((t1024895
                                               (let ((or1024855
                                                      (null? lst)))
                                                 (if or1024855
                                                     or1024855
                                                     (let ((t1024894
                                                            (car lst)))
                                                       (null? t1024894))))))
                                          (if t1024895
                                              true
                                              (let ((t1024896 (cdar lst)))
                                                (let ((t1024897
                                                       (length t1024896)))
                                                  (let ((t1024898
                                                         (= 0 t1024897)))
                                                    (if t1024898
                                                        (let ((t1024899
                                                               (map car lst)))
                                                          (apply op t1024899))
                                                        (let ((t1024900
                                                               (map car lst)))
                                                          (let ((t1024901
                                                                 (apply
                                                                  op
                                                                  t1024900)))
                                                            (let ((t1024902
                                                                   (equal?
                                                                    false
                                                                    t1024901)))
                                                              (if t1024902
                                                                  false
                                                                  (let ((t1024903
                                                                         (map
                                                                          cdr
                                                                          lst)))
                                                                    (loop
                                                                     t1024903))))))))))))))))))))))))
              (let ((foldr
                     (Ycomb
                      (λ (foldr)
                        (λ param-lst1024856
                          (let ((t1024904 (length '(param-lst1024856))))
                            (let ((t1024905 (< 2 t1024904)))
                              (if t1024905
                                  (raise "invalid parameter list!")
                                  (let ((f (car param-lst1024856)))
                                    (let ((param-lst1024856
                                           (cdr param-lst1024856)))
                                      (let ((acc (car param-lst1024856)))
                                        (let ((param-lst1024856
                                               (cdr param-lst1024856)))
                                          (let ((lsts param-lst1024856))
                                            (let ((t1024906
                                                   (ormap null? lsts)))
                                              (if t1024906
                                                  acc
                                                  (let ((xs (map car lsts)))
                                                    (let ((rsts
                                                           (map cdr lsts)))
                                                      (let ((acc+
                                                             (let ((t1024907
                                                                    (append1
                                                                     rsts
                                                                     '())))
                                                               (let ((t1024908
                                                                      (cons
                                                                       acc
                                                                       t1024907)))
                                                                 (let ((t1024909
                                                                        (cons
                                                                         f
                                                                         t1024908)))
                                                                   (apply
                                                                    foldr
                                                                    t1024909))))))
                                                        (let ((t1024910
                                                               (cons
                                                                acc+
                                                                '())))
                                                          (let ((t1024911
                                                                 (append1
                                                                  xs
                                                                  t1024910)))
                                                            (apply
                                                             f
                                                             t1024911)))))))))))))))))))))
                (let ((foldl
                       (Ycomb
                        (λ (foldl)
                          (λ param-lst1024857
                            (let ((t1024912
                                   (length '(param-lst1024857))))
                              (let ((t1024913 (< 2 t1024912)))
                                (if t1024913
                                    (raise "invalid parameter list!")
                                    (let ((f (car param-lst1024857)))
                                      (let ((param-lst1024857
                                             (cdr param-lst1024857)))
                                        (let ((acc
                                               (car param-lst1024857)))
                                          (let ((param-lst1024857
                                                 (cdr param-lst1024857)))
                                            (let ((lsts param-lst1024857))
                                              (let ((t1024914
                                                     (ormap null? lsts)))
                                                (if t1024914
                                                    acc
                                                    (let ((xs
                                                           (map car lsts)))
                                                      (let ((rsts
                                                             (map
                                                              cdr
                                                              lsts)))
                                                        (let ((acc+
                                                               (let ((t1024915
                                                                      (cons
                                                                       acc
                                                                       '())))
                                                                 (let ((t1024916
                                                                        (append1
                                                                         xs
                                                                         t1024915)))
                                                                   (apply
                                                                    f
                                                                    t1024916)))))
                                                          (let ((t1024917
                                                                 (append1
                                                                  rsts
                                                                  '())))
                                                            (let ((t1024918
                                                                   (cons
                                                                    acc+
                                                                    t1024917)))
                                                              (let ((t1024919
                                                                     (cons
                                                                      f
                                                                      t1024918)))
                                                                (apply
                                                                 foldl
                                                                 t1024919))))))))))))))))))))))
                  (let ((reverse
                         (Ycomb
                          (λ (reverse)
                            (λ (lst)
                              (let ((t1024920 (null? lst)))
                                (if t1024920
                                    lst
                                    (let ((t1024921 (cdr lst)))
                                      (let ((t1024922 (reverse t1024921)))
                                        (let ((t1024923 (car lst)))
                                          (let ((t1024924
                                                 (cons t1024923 '())))
                                            (append1
                                             t1024922
                                             t1024924))))))))))))
                    (let ((append
                           (Ycomb
                            (λ (append)
                              (λ param-lst1024858
                                (let ((t1024925
                                       (length '(param-lst1024858))))
                                  (let ((t1024926 (< 1 t1024925)))
                                    (if t1024926
                                        (raise "invalid parameter list!")
                                        (let ((xs (car param-lst1024858)))
                                          (let ((param-lst1024858
                                                 (cdr param-lst1024858)))
                                            (let ((x param-lst1024858))
                                              (let ((t1024927
                                                     (cons xs '())))
                                                (let ((t1024928
                                                       (append1
                                                        t1024927
                                                        x)))
                                                  (let ((t1024929
                                                         (reverse
                                                          t1024928)))
                                                    (foldl
                                                     append1
                                                     null
                                                     t1024929)))))))))))))))
                      (let ((filter
                             (Ycomb
                              (λ (filter)
                                (λ (op lst)
                                  (let ((t1024930 (null? lst)))
                                    (if t1024930
                                        null
                                        (let ((t1024931 (car lst)))
                                          (let ((t1024932 (op t1024931)))
                                            (if t1024932
                                                (let ((t1024933 (car lst)))
                                                  (let ((t1024934
                                                         (cdr lst)))
                                                    (let ((t1024935
                                                           (filter
                                                            op
                                                            t1024934)))
                                                      (cons
                                                       t1024933
                                                       t1024935))))
                                                (let ((t1024936 (cdr lst)))
                                                  (filter
                                                   op
                                                   t1024936))))))))))))
                        (let ((f
                               (Ycomb
                                (λ (f)
                                  (λ (n)
                                    (let ((t1024937 (= n 0)))
                                      (if t1024937
                                          1
                                          (let ((t1024938 (- n 1)))
                                            (let ((t1024939 (f t1024938)))
                                              (* n t1024939))))))))))
                          (f 5)))))))))))))