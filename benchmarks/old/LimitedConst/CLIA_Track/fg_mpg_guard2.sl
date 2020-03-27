(set-logic LIA)

(synth-fun eq1 ( (x Int) (y Int) (w1 Int) ) Int (
(Start Int ( x
y
2
w1
(+ Start Start)
))
(NT2 Bool ( (>= Start Start) (>= Start Start)
))
))


(define-fun iteB (( b1 Bool ) (b2 Bool ) (b3 Bool )) Bool ( or ( and b1 b2 ) ( and (not b1 ) b3 ) ) )
(define-fun plus2 ((b1 Int) (b2 Int)) Int ( + b1 b2))
(define-fun plus3 ((b1 Int) (b2 Int) (b3 Int)) Int ( +  ( + b1 b2) b3))

(declare-var x Int ) 
(declare-var y Int ) 
(declare-var z Int ) 



(constraint ( iteB ( <= (plus3 x y z ) 1 ) 
                    ( = ( eq1 x y z) ( plus2 x  1    ) )
		    ( = ( eq1 x y z) ( - x   y  ) )
             )
)      


(check-synth)

