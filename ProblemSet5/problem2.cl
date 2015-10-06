;alcance lexico con setq
(setq x 3)

(defun foo () x)

(let ((x 4)) (foo))

;alcance dinamico con defvar
(defvar x 3)

(defun foo () x)

(let ((x 4)) (foo))