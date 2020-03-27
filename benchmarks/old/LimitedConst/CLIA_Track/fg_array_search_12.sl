(set-logic LIA)
(synth-fun findIdx ( (x Int) (y Int) (z Int) (w1 Int) (w2 Int) (w3 Int) (w4 Int) (w5 Int) (w6 Int) (w7 Int) (w8 Int) (w9 Int) (w10 Int)  ) Int  (
(Start Int ( x
y
z
w1
w2
w3
w4
w5
w6
w7
w8
w9
w10
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
(declare-var x9 Int)
(declare-var x10 Int)
(declare-var x11 Int)
(declare-var x12 Int)
(declare-var k Int)
(constraint (or (not  (and (<= x1 x2) (<= x2 x3))) (or (not  (<= k x1)) (= (findIdx x1 x2 x3 x4 x5 x6 x7 x8 x9 x10 x11 x12 k) 1))))
(constraint (or (not  (and (< x1 x2) (< x2 x3))) (or (not  (> k x3)) (= (findIdx x1 x2 x3 x4 x5 x6 x7 x8 x9 x10 x11 x12  k) 4))))
(constraint (or (not  (and (< x1 x2) (< x2 x3))) (or (not  (and (> k x1) (< k x2))) (= (findIdx x1 x2 x3 x4 x5 x6 x7 x8 x9 x10 x11 x12  k) 2))))
(constraint (or (not  (and (< x1 x2) (< x2 x3))) (or (not  (and (> k x2) (< k x3))) (= (findIdx x1 x2 x3 x4 x5 x6 x7 x8 x9 x10 x11 x12 k) 3))))
(check-synth)
