(set-logic LIA)
(synth-fun findSum ( (x Int) (y Int) (w1 Int) ) Int (
(Start Int ( x
y
2
w1
(+ Start Start)
))
(NT2 Bool ( (>= Start Start) (>= Start Start)
))
))

(declare-var x1 Int)
(declare-var x2 Int)
(declare-var x3 Int)
(constraint (or (not (> (+ x1 x2) 1)) (= (findSum x1 x2 x3 ) (+ x1 x2))))
(constraint (or (not (and (<= (+ x1 x2) 1) (> (+ x2 x3) 1))) (= (findSum x1 x2 x3 ) (+ x2 x3))))
(constraint (or (not (and (<= (+ x1 x2) 1) (<= (+ x2 x3) 1))) (= (findSum x1 x2 x3 ) 1)))
(check-synth)
