(set-logic LIA)
(synth-fun findIdx ( (x Int) (y Int) (z Int) (w1 Int) (w2 Int)) Int  (
(Start Int ( x
y
z
w1
w2
5
(+ Start Start)
))
(NT2 Bool ( (>= Start Start) (>= Start Start)
))
))
(declare-var x1 Int)
(declare-var x2 Int)
(declare-var x3 Int)
(declare-var x4 Int)
(declare-var k Int)
(constraint (or (not  (and (<= x1 x2) (<= x2 x3))) (or (not  (<= k x1)) (= (findIdx x1 x2 x3 x4 k) 1))))
(constraint (or (not  (and (< x1 x2) (< x2 x3))) (or (not  (> k x3)) (= (findIdx x1 x2 x3 x4 k) 4))))
(constraint (or (not  (and (< x1 x2) (< x2 x3))) (or (not  (and (> k x1) (< k x2))) (= (findIdx x1 x2 x3 x4 k) 2))))
(constraint (or (not  (and (< x1 x2) (< x2 x3))) (or (not  (and (> k x2) (< k x3))) (= (findIdx x1 x2 x3 x4 k) 3))))
(check-synth)
