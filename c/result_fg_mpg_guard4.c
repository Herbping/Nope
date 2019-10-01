#include <stdbool.h>
bool BNT_0(int x,int y,int z){
	if (__VERIFIER_nondet_int()) {return Start(x,y,z)<=Start(x,y,z);}
	if (__VERIFIER_nondet_int()) {return BNT_0(x,y,z)&&BNT_0(x,y,z);}
	if (__VERIFIER_nondet_int()) {return !BNT_0(x,y,z);}
}
int Start(int x,int y,int z){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return x;}
	if (__VERIFIER_nondet_int()) {return y;}
	if (__VERIFIER_nondet_int()) {return z;}
	if (__VERIFIER_nondet_int()) {return Start(x,y,z)+Start(x,y,z);}
	if (__VERIFIER_nondet_int()) {return Start(x,y,z)-Start(x,y,z);}
}
int main(int x,int y,int z){ return Start(x,y,z);}