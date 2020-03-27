(set-logic LIA)
(synth-fun findIdx ( (x Int) (y Int) (z Int) (w1 Int) (w2 Int) (w3 Int) (w4 Int) (w5 Int) (w6 Int)    ) Int  (
(Start Int ( x
y
z
w1
w2
w3
w4
w5
w6
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
(declare-var x5 Int)
(declare-var x6 Int)
(declare-var x7 Int)
(declare-var x8 Int)
(declare-var k Int)
(constraint (or (not  (and (<= x1 x2) (<= x2 x3))) (or (not  (<= k x1)) (= (findIdx x1 x2 x3 x4 x5 x6 x7 x8  k) 1))))
(constraint (or (not  (and (< x1 x2) (< x2 x3))) (or (not  (> k x3)) (= (findIdx x1 x2 x3 x4 x5 x6 x7 x8    k) 4))))
(constraint (or (not  (and (< x1 x2) (< x2 x3))) (or (not  (and (> k x1) (< k x2))) (= (findIdx x1 x2 x3 x4 x5 x6 x7 x8 k) 2))))
(constraint (or (not  (and (< x1 x2) (< x2 x3))) (or (not  (and (> k x2) (< k x3))) (= (findIdx x1 x2 x3 x4 x5 x6 x7 x8 k) 3))))
(check-synth)