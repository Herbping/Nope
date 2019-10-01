( define-fun hd07  (    ( x  ( BitVec 32 ) ) )  ( BitVec 32 )  ( bvand     ( bvnot    x )  ( bvadd     x   #x00000001 ) ) )
( synth-fun f  (    ( x  ( BitVec 32 ) ) )  ( BitVec 32 ) (
	(Start  ( BitVec 32 ) (		#x00000000
		#x00000001
		#xffffffff
		x
		(bvnot NT1)
		(bvlshr NT1 cons)
		(bvand NT1 cons)
		(bvadd NT1 NT1)
		(bvsub NT1 NT1)
		(bvshl NT1 cons)
		(bvnot NT2)
		(bvand NT2 cons)
		(bvshl NT2 cons)
		(bvsub NT2 NT1)
		(bvadd NT2 NT1)
		(bvlshr NT2 cons)
))
	(NT1  ( BitVec 32 ) (		#x00000000
		#x00000001
		#xffffffff
		x
))
 	(cons ( BitVec 32) ( (bvadd cons cons) #x00000001))

	(NT2  ( BitVec 32 ) (		(bvnot NT1)
		(bvlshr NT1 cons)
		(bvand NT1 cons)
		(bvadd NT1 NT1)
		(bvsub NT1 NT1)
		(bvshl NT1 cons)
))
))
  ( declare-var x  ( BitVec 32 ) )
  ( constraint  ( =     ( hd07    x )  ( f    x ) ) )
  ( check-synth )
