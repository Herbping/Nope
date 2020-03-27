(set-logic LIA)

(synth-fun eq1 ( (x Int) (y Int) (z Int) ) Int 
((Start Int (x y z 0 1)) )

)


(declare-var x Int ) 
(declare-var y Int ) 
(declare-var z Int ) 



(constraint ( = ( eq1 x y z ) ( + x y ) ) )      


(check-synth)

