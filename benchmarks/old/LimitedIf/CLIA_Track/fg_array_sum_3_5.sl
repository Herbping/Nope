(set-logic LIA)
(synth-fun findSum ( (x Int) (y Int) (z Int)) Int  (
(Start Int ( x
y
z
0
1
(ite NT2 NT1 NT1)
))
(NT1 Int ( x
y
z
0
1
(+ NT1 NT1)
))
(NT2 Bool ( (>= NT1 NT1) (>= NT1 NT1)
))
))
(declare-var x1 Int)
(declare-var x2 Int)
(declare-var x3 Int)
(constraint (or (not (> (+ x1 x2) 1)) (= (findSum x1 x2 x3 ) (+ x1 x2))))
(constraint (or (not (and (<= (+ x1 x2) 1) (> (+ x2 x3) 1))) (= (findSum x1 x2 x3 ) (+ x2 x3))))
(constraint (or (not (and (<= (+ x1 x2) 1) (<= (+ x2 x3) 1))) (= (findSum x1 x2 x3 ) 0)))
(check-synth)
