#include <stdbool.h>
bool BNT_0(int x1,int x2){
	if (__VERIFIER_nondet_int()) {return Start(x1,x2)<=Start(x1,x2);}
	if (__VERIFIER_nondet_int()) {return BNT_0(x1,x2)&&BNT_0(x1,x2);}
	if (__VERIFIER_nondet_int()) {return !BNT_0(x1,x2);}
}
int Start(int x1,int x2){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return x1;}
	if (__VERIFIER_nondet_int()) {return x2;}
	if (__VERIFIER_nondet_int()) {return Start(x1,x2)+Start(x1,x2);}
	if (__VERIFIER_nondet_int()) {return Start(x1,x2)-Start(x1,x2);}
}
int main(int x1,int x2){ return Start(x1,x2);}