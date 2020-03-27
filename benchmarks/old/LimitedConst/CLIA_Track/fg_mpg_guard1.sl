(set-logic LIA)

(synth-fun eq1 ( (x Int) (y Int) (w1 Int) ) Int (
(Start Int ( x
y
2
w1
(+ Start Start)
))
))


(declare-var x Int ) 
(declare-var y Int ) 
(declare-var z Int ) 



(constraint (or (and ( >= (+ x y) 1 ) 
                    ( = ( eq1 x y z) ( + x  1  ) )) (and (not ( >= (+ x y) 1 ) ) 
		    ( = ( eq1 x y z) ( - x   1 ) ))
             )
)      


(check-synth)

