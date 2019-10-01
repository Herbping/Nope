#include <stdbool.h>
bool BNT_1(int y1,int y2,int y3){
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,y3)<=Start(y1,y2,y3);}
	if (__VERIFIER_nondet_int()) {return BNT_0(y1,y2,y3)&&BNT_1(y1,y2,y3);}
	if (__VERIFIER_nondet_int()) {return !BNT_1(y1,y2,y3);}
}
bool BNT_0(int y1,int y2,int y3){
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,y3)<=NT_0(y1,y2,y3);}
	if (__VERIFIER_nondet_int()) {return BNT_0(y1,y2,y3)&&BNT_0(y1,y2,y3);}
	if (__VERIFIER_nondet_int()) {return !BNT_0(y1,y2,y3);}
}
int Start(int y1,int y2,int y3){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return y1;}
	if (__VERIFIER_nondet_int()) {return y2;}
	if (__VERIFIER_nondet_int()) {return y3;}
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,y3);}
	if (BNT_0(y1,y2,y3)) {return NT_0(y1,y2,y3);} else {return NT_0(y1,y2,y3);}
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,y3)+Start(y1,y2,y3);}
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,y3)-Start(y1,y2,y3);}
}
int NT_0(int y1,int y2,int y3){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return y1;}
	if (__VERIFIER_nondet_int()) {return y2;}
	if (__VERIFIER_nondet_int()) {return y3;}
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,y3)+NT_0(y1,y2,y3);}
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,y3)-NT_0(y1,y2,y3);}
}
int main(int y1,int y2,int y3){ return Start(y1,y2,y3);}