(define (raiz a b c)
(let ((discr (- (expt b 2) (* 4 a c))) (div (* 2 a)))
(list
(if (negative? discr ) 'no 'raiz)
(/ (- (- b) (sqrt discr)) div)
(/ (+ (- b) (sqrt discr)) div)
)
)
)
