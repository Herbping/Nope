(set-logic LIA)
(synth-fun findIdx ( (x Int) (y Int) (z Int) (w1 Int)) Int (
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
(declare-var k Int)
(constraint (or (not  (and (< x1 x2) (< x2 x3))) (or (not  (< k x1)) (= (findIdx x1 x2 x3 k) 0))))
(constraint (or (not  (and (< x1 x2) (< x2 x3))) (or (not  (> k x3)) (= (findIdx x1 x2 x3 k) 3))))
(constraint (or (not  (and (< x1 x2) (< x2 x3))) (or (not  (and (> k x1) (< k x2))) (= (findIdx x1 x2 x3 k) 1))))
(constraint (or (not  (and (< x1 x2) (< x2 x3))) (or (not  (and (> k x2) (< k x3))) (= (findIdx x1 x2 x3 k) 2))))
(check-synth)
