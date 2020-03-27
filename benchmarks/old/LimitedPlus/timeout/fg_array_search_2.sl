(set-logic LIA)
(synth-fun findIdx ( (x Int) (y Int) (z Int)) Int  (
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
(declare-var k Int)
(constraint (or (not (< x1 x2)) (or (not (< k x1)) (= (findIdx x1 x2 k) 0))))
(constraint (or (not (< x1 x2)) (or (not (> k x2)) (= (findIdx x1 x2 k) 2))))
(constraint (or (not (< x1 x2)) (or (not  (and (> k x1) (< k x2))) (= (findIdx x1 x2 k) 1))))
(check-synth)
