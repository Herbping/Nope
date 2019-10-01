#include <stdbool.h>
bool BNT_2(int x,int y,int z,int w){
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,w)<=Start(x,y,z,w);}
	if (__VERIFIER_nondet_int()) {return NT_1(x,y,z,w)<=NT_1(x,y,z,w);}
	if (__VERIFIER_nondet_int()) {return BNT_0(x,y,z,w)&&BNT_2(x,y,z,w);}
	if (__VERIFIER_nondet_int()) {return BNT_1(x,y,z,w)&&BNT_1(x,y,z,w);}
	if (__VERIFIER_nondet_int()) {return !BNT_2(x,y,z,w);}
}
bool BNT_1(int x,int y,int z,int w){
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,w)<=NT_1(x,y,z,w);}
	if (__VERIFIER_nondet_int()) {return BNT_0(x,y,z,w)&&BNT_1(x,y,z,w);}
	if (__VERIFIER_nondet_int()) {return !BNT_1(x,y,z,w);}
}
bool BNT_0(int x,int y,int z,int w){
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,w)<=NT_0(x,y,z,w);}
	if (__VERIFIER_nondet_int()) {return BNT_0(x,y,z,w)&&BNT_0(x,y,z,w);}
	if (__VERIFIER_nondet_int()) {return !BNT_0(x,y,z,w);}
}
int Start(int x,int y,int z,int w){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return x;}
	if (__VERIFIER_nondet_int()) {return y;}
	if (__VERIFIER_nondet_int()) {return z;}
	if (__VERIFIER_nondet_int()) {return w;}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,w);}
	if (__VERIFIER_nondet_int()) {return NT_1(x,y,z,w);}
	if (BNT_0(x,y,z,w)) {return NT_0(x,y,z,w);} else {return NT_1(x,y,z,w);}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,w)+Start(x,y,z,w);}
	if (__VERIFIER_nondet_int()) {return NT_1(x,y,z,w)+NT_1(x,y,z,w);}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,w)-Start(x,y,z,w);}
	if (__VERIFIER_nondet_int()) {return NT_1(x,y,z,w)-NT_1(x,y,z,w);}
}
int NT_1(int x,int y,int z,int w){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return x;}
	if (__VERIFIER_nondet_int()) {return y;}
	if (__VERIFIER_nondet_int()) {return z;}
	if (__VERIFIER_nondet_int()) {return w;}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,w);}
	if (BNT_0(x,y,z,w)) {return NT_0(x,y,z,w);} else {return NT_0(x,y,z,w);}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,w)+NT_1(x,y,z,w);}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,w)-NT_1(x,y,z,w);}
}
int NT_0(int x,int y,int z,int w){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return x;}
	if (__VERIFIER_nondet_int()) {return y;}
	if (__VERIFIER_nondet_int()) {return z;}
	if (__VERIFIER_nondet_int()) {return w;}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,w)+NT_0(x,y,z,w);}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,w)-NT_0(x,y,z,w);}
}
int main(int x,int y,int z,int w){ return Start(x,y,z,w);}