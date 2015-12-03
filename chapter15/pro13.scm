(define (union a b)
  (cond ((null? b) a)
        ((element? (car b) a)
         (union a (cdr b)))
        (#t (union (cons (car b) a) (cdr b)))))