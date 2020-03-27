
(set-logic LIA)
( synth-fun max7  (          ( x1  Int )  ( x2  Int )  ( x3  Int )  ( x4  Int )  ( x5  Int )  ( x6  Int )  ( x7  Int ) )  Int (
	(Start  Int (		x1
		x2
		x3
		x4
		x5
		x6
		x7
		0
		1
		(+ NT1 NT1)
		(ite NT2 NT1 NT1)
		(+ NT3 NT1)
		(+ NT4 NT1)
		(+ NT3 NT3)
		(ite NT2 NT3 NT1)
		(ite NT5 NT1 NT1)
		(+ NT4 NT4)
		(+ NT7 NT1)
		(ite NT5 NT4 NT1)
		(ite NT5 NT1 NT4)
		(ite NT2 NT8 NT1)
		(ite NT11 NT1 NT1)
		(ite NT2 NT4 NT1)
		(ite NT6 NT1 NT1)
		(+ NT8 NT1)
		(+ NT9 NT1)
		(ite NT2 NT7 NT1)
		(ite NT6 NT4 NT1)
		(ite NT6 NT1 NT4)
		(ite NT10 NT1 NT1)
		(ite NT5 NT8 NT1)
))
	(NT1  Int (		x1
		x2
		x3
		x4
		x5
		x6
		x7
		0
		1
		(+ NT1 NT1)
))
	(NT2  Bool (		(<= NT1 NT1)
		(not NT2)
		(and NT2 NT2)
		(or NT2 NT2)
))
	(NT3  Int (		(ite NT2 NT1 NT1)
		(+ NT3 NT1)
))
	(NT4  Int (		(+ NT4 NT1)
		(+ NT3 NT3)
		(ite NT2 NT3 NT1)
		(ite NT5 NT1 NT1)
))
	(NT5  Bool (		(<= NT3 NT1)
		(not NT5)
		(and NT5 NT2)
		(or NT5 NT2)
))
	(NT6  Bool (		(<= NT4 NT1)
		(<= NT3 NT3)
		(not NT6)
		(and NT6 NT2)
		(or NT6 NT2)
		(and NT5 NT5)
		(or NT5 NT5)
))
	(NT7  Int (		(+ NT4 NT4)
		(+ NT7 NT1)
		(ite NT5 NT4 NT1)
		(ite NT5 NT1 NT4)
		(ite NT2 NT8 NT1)
		(ite NT11 NT1 NT1)
))
	(NT8  Int (		(ite NT2 NT4 NT1)
		(ite NT6 NT1 NT1)
		(+ NT8 NT1)
))
	(NT9  Int (		(+ NT9 NT1)
		(ite NT2 NT7 NT1)
		(ite NT6 NT4 NT1)
		(ite NT6 NT1 NT4)
		(ite NT10 NT1 NT1)
		(ite NT5 NT8 NT1)
))
	(NT10  Bool (		(<= NT4 NT4)
		(<= NT7 NT1)
		(not NT10)
		(and NT6 NT6)
		(or NT6 NT6)
		(and NT10 NT2)
		(or NT10 NT2)
))
	(NT11  Bool (		(<= NT8 NT1)
		(not NT11)
		(and NT11 NT2)
		(or NT11 NT2)
))
))

(declare-var x1 Int)
(declare-var x2 Int)
(declare-var x3 Int)
(declare-var x4 Int)
(declare-var x5 Int)
(declare-var x6 Int)
(declare-var x7 Int)

(constraint (>= (max7 x1 x2 x3 x4 x5 x6 x7) x1))
(constraint (>= (max7 x1 x2 x3 x4 x5 x6 x7) x2))
(constraint (>= (max7 x1 x2 x3 x4 x5 x6 x7) x3))
(constraint (>= (max7 x1 x2 x3 x4 x5 x6 x7) x4))
(constraint (>= (max7 x1 x2 x3 x4 x5 x6 x7) x5))
(constraint (>= (max7 x1 x2 x3 x4 x5 x6 x7) x6))
(constraint (>= (max7 x1 x2 x3 x4 x5 x6 x7) x7))


(constraint (or (= x1 (max7 x1 x2 x3 x4 x5 x6 x7))
            (or (= x2 (max7 x1 x2 x3 x4 x5 x6 x7))
            (or (= x3 (max7 x1 x2 x3 x4 x5 x6 x7))
            (or (= x4 (max7 x1 x2 x3 x4 x5 x6 x7))
            (or (= x5 (max7 x1 x2 x3 x4 x5 x6 x7))
            (or (= x6 (max7 x1 x2 x3 x4 x5 x6 x7))
	        (= x7 (max7 x1 x2 x3 x4 x5 x6 x7)))))))))

(check-synth)


