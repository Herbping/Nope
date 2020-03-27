(set-logic LIA)
(synth-fun findSum ( (x Int) (y Int) ) Int (
(Start Int ( x
y
2
(+ Start Start)
))
(NT2 Bool ( (>= Start Start) (>= Start Start)
))
))
(declare-var x1 Int)
(declare-var x2 Int)
(constraint (or (not  (> (+ x1 x2) 15)) (= (findSum x1 x2 ) (+ x1 x2))))
(constraint (or (not  (<= (+ x1 x2) 15)) (= (findSum x1 x2 ) 1)))
(check-synth)
