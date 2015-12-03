define (borrar-ultimo lst)
    (if (null? (cdr lst))
        '()
        (cons (car lst) (borrar-ultimo (cdr lst)))))
