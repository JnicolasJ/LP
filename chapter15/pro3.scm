(define (raiz a b c)
(let ((d (- (expt b 2) (* 4 a c))) (div (* 2 a)))
(list
(cond
((negative? d) 'no 'raiz )
(else 'real)
)
(/ (- (- b) (sqrt d)) div)
(/ (+ (- b) (sqrt d)) div)
)
)
)
