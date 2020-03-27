(set-logic LIA)
(synth-fun findSum ( ( x Int ) ( y Int ) ( z Int ) ( w1 Int ) ) Int (
(Start Int ( x
y
w1
z
0
1
(+ NT1 NT1)
(ite NT2 NT1 NT1)
(+ NT3 NT1)
))
(NT1 Int ( x
y
w1
z
0
1
(+ NT1 NT1)
))
(NT2 Bool ( (== NT1 NT1)
(>= NT1 NT1)
))
(NT3 Int ( (ite NT2 NT1 NT1)
(+ NT3 NT1)
))
))
(declare-var x1 Int)
(declare-var x2 Int)
(declare-var x3 Int)
(declare-var x4 Int)

(constraint (or (not (> (+ x1 x2) 15)) (= (findSum x1 x2 x3 x4) (+ x1 x2))))
(constraint (or (not (and (<= (+ x1 x2) 15) (> (+ x2 x3) 15))) (= (findSum x1 x2 x3 x4) (+ x2 x3))))
(constraint (or (not (and (and (<= (+ x1 x2) 15) (<= (+ x2 x3) 15)) (> (+ x3 x4) 15))) (= (findSum x1 x2 x3 x4) (+ x3 x4))))
(constraint (or (not (and (and (<= (+ x1 x2) 15) (<= (+ x2 x3) 15)) (<= (+ x3 x4) 15))) (= (findSum x1 x2 x3 x4) 0)))

(check-synth)
