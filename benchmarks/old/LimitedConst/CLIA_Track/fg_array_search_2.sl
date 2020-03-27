(set-logic LIA)
(synth-fun findIdx ( (x Int) (y Int) (z Int)) Int  (
(Start Int ( x
y
z
4
(+ Start Start)
))
(NT2 Bool ( (>= Start Start) (>= Start Start)
))
))

(declare-var x1 Int)
(declare-var x2 Int)
(declare-var k Int)
(constraint (or (not (<= x1 x2)) (or (not (<= k x1)) (= (findIdx x1 x2 k) 1))))
(constraint (or (not (< x1 x2)) (or (not (> k x2)) (= (findIdx x1 x2 k) 2))))
(constraint (or (not (< x1 x2)) (or (not  (and (> k x1) (< k x2))) (= (findIdx x1 x2 k) 3))))
(check-synth)
