#lang racket

(define Ycomb ((λ (x) (x x))
               (λ (g) (λ (f)
                        (f (λ vs
                             (apply ((g g) f) vs)))))))

#;(foldl
   (λ (f acc . lsts)
     (if (ormap null? lsts)
         acc
         (let* ([xs (map car lsts)]
                [rsts (map cdr lsts)]
                [acc+ (apply f (append xs `(,acc)))])
           (apply foldl `(,f ,acc+ ,@rsts))))))


;after desugering
(let ((foldl
       (Ycomb
        (λ (foldl)
          (λ param-lst1966087
            (if (< 2 (length '(param-lst1966087)))
                (raise "argument mismatch!")
                (let ((f (car param-lst1966087)) (param-lst1966087 (cdr param-lst1966087)))
                  (let ((acc (car param-lst1966087))
                        (param-lst1966087 (cdr param-lst1966087)))
                    (let ((lsts param-lst1966087))
                      (if (ormap null? lsts)
                          acc
                          (let ((xs (map car lsts)))
                            (let ((rsts (map cdr lsts)))
                              (let ((acc+ (apply f (append xs (cons acc '())))))
                                (apply
                                 foldl
                                 (cons f (cons acc+ (append rsts '())))))))))))))))))
  (foldl + 0 (list 1 2 3)))

;after anf-conversion
(let ((foldl
       (Ycomb
        (λ (foldl)
          (λ param-lst2071203
            (let ((t2071258 (length '(param-lst2071203))))
              (let ((t2071259 (< 2 t2071258)))
                (if t2071259
                    (raise "invalid parameter list!")
                    (let ((f (car param-lst2071203)))
                      (let ((param-lst2071203 (cdr param-lst2071203)))
                        (let ((acc (car param-lst2071203)))
                          (let ((param-lst2071203 (cdr param-lst2071203)))
                            (let ((lsts param-lst2071203))
                              (let ((t2071260 (ormap null? lsts)))
                                (if t2071260
                                    acc
                                    (let ((xs (map car lsts)))
                                      (let ((rsts (map cdr lsts)))
                                        (let ((acc+
                                               (let ((t2071261 (cons acc '())))
                                                 (let ((t2071262 (append xs t2071261))) (apply f t2071262)))))
                                          (let ((t2071263 (append rsts '())))
                                            (let ((t2071264 (cons acc+ t2071263)))
                                              (let ((t2071265 (cons f t2071264)))
                                                (apply foldl t2071265))))))))))))))))))))))
  (foldl + 0 (list 1 2 3)))


(let ((Ycomb
       ((λ (x) (x x))
        (λ (g) (λ (f) (f (λ vs (let ((t2071205 (g g))) (let ((t2071206 (t2071205 f))) (apply t2071206 vs))))))))))
  (let ((append*
         (Ycomb
          (λ (append*)
            (λ (lhs rhs)
              (let ((t2071207 (null? lhs)))
                (if t2071207
                    rhs
                    (let ((t2071208 (first lhs)))
                      (let ((t2071209 (rest lhs))) (let ((t2071210 (append* t2071209 rhs))) (cons t2071208 t2071210)))))))))))
    (let ((map1
           (Ycomb
            (λ (map1)
              (λ (op lst)
                (let ((t2071211 (null? lst)))
                  (if t2071211
                      null
                      (let ((t2071212 (car lst)))
                        (let ((t2071213 (op t2071212)))
                          (let ((t2071214 (cdr lst))) (let ((t2071215 (map1 op t2071214))) (cons t2071213 t2071215))))))))))))
      (let ((map
             (Ycomb
              (λ (map)
                (λ param-lst2071197
                  (let ((t2071216 (length '(param-lst2071197))))
                    (let ((t2071217 (< 2 t2071216)))
                      (if t2071217
                          (raise "invalid parameter list!")
                          (let ((op (car param-lst2071197)))
                            (let ((param-lst2071197 (cdr param-lst2071197)))
                              (let ((lst1 (car param-lst2071197)))
                                (let ((param-lst2071197 (cdr param-lst2071197)))
                                  (let ((list-of-lists param-lst2071197))
                                    (let ((combined_lst (cons lst1 list-of-lists)))
                                      (let ((t2071218 (car combined_lst)))
                                        (let ((t2071219 (null? t2071218)))
                                          (if t2071219
                                              null
                                              (let ((t2071220 (map1 car combined_lst)))
                                                (let ((t2071221 (apply op t2071220)))
                                                  (let ((t2071222 (map1 cdr combined_lst)))
                                                    (let ((t2071223 (apply map op t2071222)))
                                                      (cons t2071221 t2071223))))))))))))))))))))))
        (let ((ormap
               (Ycomb
                (λ (ormap)
                  (λ param-lst2071198
                    (let ((t2071224 (length '(param-lst2071198))))
                      (let ((t2071225 (< 1 t2071224)))
                        (if t2071225
                            (raise "invalid parameter list!")
                            (let ((op (car param-lst2071198)))
                              (let ((param-lst2071198 (cdr param-lst2071198)))
                                (let ((lst param-lst2071198))
                                  (let loop ((lst lst))
                                    (let ((t2071227
                                           (let ((or2071199 (null? lst)))
                                             (if or2071199 or2071199 (let ((t2071226 (car lst))) (null? t2071226))))))
                                      (if t2071227
                                          false
                                          (let ((t2071228 (cdar lst)))
                                            (let ((t2071229 (length t2071228)))
                                              (let ((t2071230 (= 0 t2071229)))
                                                (if t2071230
                                                    (let ((t2071231 (map car lst))) (apply op t2071231))
                                                    (let ((t2071232 (map car lst)))
                                                      (let ((t2071233 (apply op t2071232)))
                                                        (let ((t2071234 (if t2071233 #f #t)))
                                                          (let ((t2071235 (equal? false t2071234)))
                                                            (if t2071235
                                                                (let ((t2071236 (map car lst))) (apply op t2071236))
                                                                (let ((t2071237 (map cdr lst)))
                                                                  (loop t2071237)))))))))))))))))))))))))
          (let ((andmap
                 (Ycomb
                  (λ (andmap)
                    (λ param-lst2071200
                      (let ((t2071238 (length '(param-lst2071200))))
                        (let ((t2071239 (< 1 t2071238)))
                          (if t2071239
                              (raise "invalid parameter list!")
                              (let ((op (car param-lst2071200)))
                                (let ((param-lst2071200 (cdr param-lst2071200)))
                                  (let ((lst param-lst2071200))
                                    (let loop ((lst lst))
                                      (let ((t2071241
                                             (let ((or2071201 (null? lst)))
                                               (if or2071201 or2071201 (let ((t2071240 (car lst))) (null? t2071240))))))
                                        (if t2071241
                                            true
                                            (let ((t2071242 (cdar lst)))
                                              (let ((t2071243 (length t2071242)))
                                                (let ((t2071244 (= 0 t2071243)))
                                                  (if t2071244
                                                      (let ((t2071245 (map car lst))) (apply op t2071245))
                                                      (let ((t2071246 (map car lst)))
                                                        (let ((t2071247 (apply op t2071246)))
                                                          (let ((t2071248 (equal? false t2071247)))
                                                            (if t2071248
                                                                false
                                                                (let ((t2071249 (map cdr lst)))
                                                                  (loop t2071249))))))))))))))))))))))))
            (let ((foldr
                   (Ycomb
                    (λ (foldr)
                      (λ param-lst2071202
                        (let ((t2071250 (length '(param-lst2071202))))
                          (let ((t2071251 (< 2 t2071250)))
                            (if t2071251
                                (raise "invalid parameter list!")
                                (let ((f (car param-lst2071202)))
                                  (let ((param-lst2071202 (cdr param-lst2071202)))
                                    (let ((acc (car param-lst2071202)))
                                      (let ((param-lst2071202 (cdr param-lst2071202)))
                                        (let ((lsts param-lst2071202))
                                          (let ((t2071252 (ormap null? lsts)))
                                            (if t2071252
                                                acc
                                                (let ((xs (map car lsts)))
                                                  (let ((rsts (map cdr lsts)))
                                                    (let ((acc+
                                                           (let ((t2071253 (append* rsts '())))
                                                             (let ((t2071254 (cons acc t2071253)))
                                                               (let ((t2071255 (cons f t2071254))) (apply foldr t2071255))))))
                                                      (let ((t2071256 (cons acc+ '())))
                                                        (let ((t2071257 (append* xs t2071256)))
                                                          (apply f t2071257)))))))))))))))))))))
              (let ((foldl
                     (Ycomb
                      (λ (foldl)
                        (λ param-lst2071203
                          (let ((t2071258 (length '(param-lst2071203))))
                            (let ((t2071259 (< 2 t2071258)))
                              (if t2071259
                                  (raise "invalid parameter list!")
                                  (let ((f (car param-lst2071203)))
                                    (let ((param-lst2071203 (cdr param-lst2071203)))
                                      (let ((acc (car param-lst2071203)))
                                        (let ((param-lst2071203 (cdr param-lst2071203)))
                                          (let ((lsts param-lst2071203))
                                            (let ((t2071260 (ormap null? lsts)))
                                              (if t2071260
                                                  acc
                                                  (let ((xs (map car lsts)))
                                                    (let ((rsts (map cdr lsts)))
                                                      (let ((acc+
                                                             (let ((t2071261 (cons acc '())))
                                                               (let ((t2071262 (append* xs t2071261))) (apply f t2071262)))))
                                                        (let ((t2071263 (append* rsts '())))
                                                          (let ((t2071264 (cons acc+ t2071263)))
                                                            (let ((t2071265 (cons f t2071264)))
                                                              (apply foldl t2071265))))))))))))))))))))))
                (let ((reverse
                       (Ycomb
                        (λ (reverse)
                          (λ (lst)
                            (let ((t2071266 (null? lst)))
                              (if t2071266
                                  lst
                                  (let ((t2071267 (cdr lst)))
                                    (let ((t2071268 (reverse t2071267)))
                                      (let ((t2071269 (car lst)))
                                        (let ((t2071270 (cons t2071269 '()))) (append* t2071268 t2071270))))))))))))
                  (let ((append
                         (Ycomb
                          (λ (append)
                            (λ param-lst2071204
                              (let ((t2071271 (length '(param-lst2071204))))
                                (let ((t2071272 (< 1 t2071271)))
                                  (if t2071272
                                      (raise "invalid parameter list!")
                                      (let ((xs (car param-lst2071204)))
                                        (let ((param-lst2071204 (cdr param-lst2071204)))
                                          (let ((x param-lst2071204))
                                            (let ((t2071273 (cons xs '())))
                                              (let ((t2071274 (append* t2071273 x)))
                                                (let ((t2071275 (reverse t2071274)))
                                                  (foldl append* null t2071275)))))))))))))))
                    (let ((filter
                           (Ycomb
                            (λ (filter)
                              (λ (op lst)
                                (let ((t2071276 (null? lst)))
                                  (if t2071276
                                      null
                                      (let ((t2071277 (car lst)))
                                        (let ((t2071278 (op t2071277)))
                                          (if t2071278
                                              (let ((t2071279 (car lst)))
                                                (let ((t2071280 (cdr lst)))
                                                  (let ((t2071281 (filter op t2071280))) (cons t2071279 t2071281))))
                                              (let ((t2071282 (cdr lst))) (filter op t2071282))))))))))))
                      (let ((t2071283 (list 1 3))) (apply + t2071283)))))))))))))