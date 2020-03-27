(set-logic LIA)
(synth-fun findIdx ( (y1 Int) (y2 Int) (k1 Int)) Int 
(( Start  Int (2
(+  2  Start)
(* 2  N)))
( N  Int (3
(* 3  Start))))
)
(declare-var x1 Int)
(declare-var x2 Int)
(declare-var k Int)
(constraint (= 3 (findIdx x1 x2 k)))
(check-synth)
