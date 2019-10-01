( define-fun hd07  (    ( x  ( BitVec 32 ) ) )  ( BitVec 32 )  ( bvand     ( bvnot    x )  ( bvadd     x   #x00000001 ) ) )
( synth-fun f  (    ( x  ( BitVec 32 ) ) )  ( BitVec 32 ) (
	(Start  ( BitVec 32 ) (		#x00000000
		#x00000001
		#xffffffff
		x
		(bvnot NT1)
		(bvneg NT1)
		(bvlshr NT1 NT1)
		(bvxor NT1 NT1)
		(bvand NT1 NT1)
		(bvor NT1 NT1)
		(bvadd NT1 NT1)
		(bvsub NT1 NT1)
		(bvshl NT1 NT1)
		(bvnot NT2)
		(bvneg NT2)
		(bvxor NT2 NT1)
		(bvand NT2 NT1)
		(bvshl NT2 NT1)
		(bvsub NT2 NT1)
		(bvor NT2 NT1)
		(bvadd NT2 NT1)
		(bvlshr NT2 NT1)
))
	(NT1  ( BitVec 32 ) (		#x00000000
		#x00000001
		#xffffffff
		x
))
	(NT2  ( BitVec 32 ) (		(bvnot NT1)
		(bvneg NT1)
		(bvlshr NT1 NT1)
		(bvxor NT1 NT1)
		(bvand NT1 NT1)
		(bvor NT1 NT1)
		(bvadd NT1 NT1)
		(bvsub NT1 NT1)
		(bvshl NT1 NT1)
))
))
  ( declare-var x  ( BitVec 32 ) )
  ( constraint  ( =     ( hd07    x )  ( f    x ) ) )
  ( check-synth )
