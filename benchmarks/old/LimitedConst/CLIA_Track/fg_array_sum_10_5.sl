

(set-logic LIA)
(synth-fun findSum ( (x Int) (y Int) (w1 Int) (w2 Int) (w3 Int) (w4 Int) (w5 Int) (w6 Int) (w7 Int) (w8 Int)) Int (
(Start Int ( x
y
2
w1
w2
w3
w4
w5
w6
w7
w8
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
(declare-var x6 Int)
(declare-var x7 Int)
(declare-var x8 Int)
(declare-var x9 Int)
(declare-var x10 Int)

(constraint (or (not (> (+ x1 x2) 5)) (= (findSum x1 x2 x3 x4 x5 x6 x7 x8 x9 x10) (+ x1 x2))))
(constraint (or (not (and (<= (+ x1 x2) 5) (> (+ x2 x3) 5))) (= (findSum x1 x2 x3 x4 x5 x6 x7 x8 x9 x10) (+ x2 x3))))
(constraint (or (not (and (and (<= (+ x1 x2) 5) (<= (+ x2 x3) 5)) (> (+ x3 x4) 5))) (= (findSum x1 x2 x3 x4 x5 x6 x7 x8 x9 x10) (+ x3 x4))))
(constraint (or (not (and (and (<= (+ x1 x2) 5) (<= (+ x2 x3) 5)) (<= (+ x3 x4) 5))) (= (findSum x1 x2 x3 x4 x5 x6 x7 x8 x9 x10) 1)))


(check-synth)