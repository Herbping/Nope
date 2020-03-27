
(set-logic LIA)

( synth-fun max3 ( ( x Int ) ( y Int ) ( z Int ) ) Int (
(Start Int ( x
y
z
0
1
(ite NT2 NT1 NT1)
))
(NT1 Int ( x
y
z
0
1
(+ NT1 NT1)
))
(NT2 Bool ( (>= NT1 NT1) (>= NT1 NT1)
))
))

(declare-var x Int)
(declare-var y Int)
(declare-var z Int)

(constraint (>= (max3 x y z) x))
(constraint (>= (max3 x y z) y))
(constraint (>= (max3 x y z) z))
(constraint (or (= x (max3 x y z))
            (or (= y (max3 x y z))
                (= z (max3 x y z)))))

(check-synth)

