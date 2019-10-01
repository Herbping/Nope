(set-logic LIA)

(synth-fun findIdx ( (y1 Int) (y2 Int) ) Int 
(
(Start Int (0 16 y1 y2 (+ Start Start) (ite B Start Start) ))
(B Bool ( (= NT0 NT0) (>= NT0 NT0)))
)
)

(declare-var x Int ) 
(declare-var y Int ) 



(constraint   ( iteB  ( >= x 5 ) ( = ( ex x y ) ( plus3 (five-times x ) (three-times y) 17 ) ) ( = (ex x y ) ( plus2 (three-times x) 1 ) ) ) )



(check-synth)

