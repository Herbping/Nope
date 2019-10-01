#include <stdbool.h>
bool BNT_0(int x,int y){
	if (__VERIFIER_nondet_int()) {return Start(x,y)<=Start(x,y);}
	if (__VERIFIER_nondet_int()) {return BNT_0(x,y)&&BNT_0(x,y);}
	if (__VERIFIER_nondet_int()) {return !BNT_0(x,y);}
}
int Start(int x,int y){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return x;}
	if (__VERIFIER_nondet_int()) {return y;}
	if (__VERIFIER_nondet_int()) {return Start(x,y)+Start(x,y);}
	if (__VERIFIER_nondet_int()) {return Start(x,y)-Start(x,y);}
}
int main(int x,int y){ return Start(x,y);}