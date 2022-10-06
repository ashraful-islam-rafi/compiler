#lang racket

(provide default-prims prims?)

;(define default-prims '(* + - / expt = > < car cdr cons equal? null?))
(define default-prims '(* +)); - / expt = car cdr cons equal? null?))

(define (prims? op)
  (if (member op default-prims)
      #t
      #f))

