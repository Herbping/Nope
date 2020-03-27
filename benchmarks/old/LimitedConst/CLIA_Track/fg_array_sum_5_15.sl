

(set-logic LIA)
(synth-fun findSum ( (x Int) (y Int) (w1 Int) (w2 Int) (w3 Int)   ) Int (
(Start Int ( x
y
2
w1
w2
w3
(+ Start Start)
))
(NT2 Bool ( (>= Start Start) (>= Start Start)
))
))

(declare-var x1 Int)
(declare-var x2 Int)
(declare-var x3 Int)
(declare-var x4 Int)
(declare-var x5 Int)

(constraint (or (not (> (+ x1 x2) 15)) (= (findSum x1 x2 x3 x4 x5 ) (+ x1 x2))))
(constraint (or (not (and (<= (+ x1 x2) 15) (> (+ x2 x3) 15))) (= (findSum x1 x2 x3 x4 x5) (+ x2 x3))))
(constraint (or (not (and (and (<= (+ x1 x2) 15) (<= (+ x2 x3) 15)) (> (+ x3 x4) 15))) (= (findSum x1 x2 x3 x4 x5 ) (+ x3 x4))))
(constraint (or (not (and (and (<= (+ x1 x2) 15) (<= (+ x2 x3) 15)) (<= (+ x3 x4) 15))) (= (findSum x1 x2 x3 x4 x5 ) 1)))


(check-synth)
