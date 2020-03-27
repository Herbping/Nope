(set-logic LIA)

( synth-fun findIdx  (        ( x1  Int )  ( x2  Int )  ( x3  Int )  ( x4  Int )  ( k  Int ) )  Int (
	(Start  Int (		x1
		x2
		x3
		x4
		k
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
		(ite NT10 NT1 NT1)
		(ite NT2 NT4 NT1)
		(ite NT6 NT1 NT1)
		(+ NT8 NT1)
))
	(NT1  Int (		x1
		x2
		x3
		x4
		k
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
		(ite NT10 NT1 NT1)
))
	(NT8  Int (		(ite NT2 NT4 NT1)
		(ite NT6 NT1 NT1)
		(+ NT8 NT1)
))
	(NT10  Bool (		(<= NT8 NT1)
		(not NT10)
		(and NT10 NT2)
		(or NT10 NT2)
))
))
(declare-var x1 Int)
(declare-var x2 Int)
(declare-var x3 Int)
(declare-var x4 Int)
(declare-var k Int)
(constraint (=> (and (< x1 x2) (and (< x2 x3) (< x3 x4))) (=> (< k x1) (= (findIdx x1 x2 x3 x4 k) 0))))
(constraint (=> (and (< x1 x2) (and (< x2 x3) (< x3 x4))) (=> (> k x4) (= (findIdx x1 x2 x3 x4 k) 4))))
(constraint (=> (and (< x1 x2) (and (< x2 x3) (< x3 x4))) (=> (and (> k x1) (< k x2)) (= (findIdx x1 x2 x3 x4 k) 1))))
(constraint (=> (and (< x1 x2) (and (< x2 x3) (< x3 x4))) (=> (and (> k x2) (< k x3)) (= (findIdx x1 x2 x3 x4 k) 2))))
(constraint (=> (and (< x1 x2) (and (< x2 x3) (< x3 x4))) (=> (and (> k x3) (< k x4)) (= (findIdx x1 x2 x3 x4 k) 3))))
(check-synth)
