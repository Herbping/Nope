#include <stdbool.h>
bool BNT_2(int y1,int y2,int y3,int y4){
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,y3,y4)<=Start(y1,y2,y3,y4);}
	if (__VERIFIER_nondet_int()) {return NT_1(y1,y2,y3,y4)<=NT_1(y1,y2,y3,y4);}
	if (__VERIFIER_nondet_int()) {return BNT_0(y1,y2,y3,y4)&&BNT_2(y1,y2,y3,y4);}
	if (__VERIFIER_nondet_int()) {return BNT_1(y1,y2,y3,y4)&&BNT_1(y1,y2,y3,y4);}
	if (__VERIFIER_nondet_int()) {return !BNT_2(y1,y2,y3,y4);}
}
bool BNT_1(int y1,int y2,int y3,int y4){
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,y3,y4)<=NT_1(y1,y2,y3,y4);}
	if (__VERIFIER_nondet_int()) {return BNT_0(y1,y2,y3,y4)&&BNT_1(y1,y2,y3,y4);}
	if (__VERIFIER_nondet_int()) {return !BNT_1(y1,y2,y3,y4);}
}
bool BNT_0(int y1,int y2,int y3,int y4){
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,y3,y4)<=NT_0(y1,y2,y3,y4);}
	if (__VERIFIER_nondet_int()) {return BNT_0(y1,y2,y3,y4)&&BNT_0(y1,y2,y3,y4);}
	if (__VERIFIER_nondet_int()) {return !BNT_0(y1,y2,y3,y4);}
}
int Start(int y1,int y2,int y3,int y4){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return y1;}
	if (__VERIFIER_nondet_int()) {return y2;}
	if (__VERIFIER_nondet_int()) {return y3;}
	if (__VERIFIER_nondet_int()) {return y4;}
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,y3,y4);}
	if (__VERIFIER_nondet_int()) {return NT_1(y1,y2,y3,y4);}
	if (BNT_0(y1,y2,y3,y4)) {return NT_0(y1,y2,y3,y4);} else {return NT_1(y1,y2,y3,y4);}
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,y3,y4)+Start(y1,y2,y3,y4);}
	if (__VERIFIER_nondet_int()) {return NT_1(y1,y2,y3,y4)+NT_1(y1,y2,y3,y4);}
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,y3,y4)-Start(y1,y2,y3,y4);}
	if (__VERIFIER_nondet_int()) {return NT_1(y1,y2,y3,y4)-NT_1(y1,y2,y3,y4);}
}
int NT_1(int y1,int y2,int y3,int y4){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return y1;}
	if (__VERIFIER_nondet_int()) {return y2;}
	if (__VERIFIER_nondet_int()) {return y3;}
	if (__VERIFIER_nondet_int()) {return y4;}
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,y3,y4);}
	if (BNT_0(y1,y2,y3,y4)) {return NT_0(y1,y2,y3,y4);} else {return NT_0(y1,y2,y3,y4);}
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,y3,y4)+NT_1(y1,y2,y3,y4);}
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,y3,y4)-NT_1(y1,y2,y3,y4);}
}
int NT_0(int y1,int y2,int y3,int y4){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return y1;}
	if (__VERIFIER_nondet_int()) {return y2;}
	if (__VERIFIER_nondet_int()) {return y3;}
	if (__VERIFIER_nondet_int()) {return y4;}
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,y3,y4)+NT_0(y1,y2,y3,y4);}
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,y3,y4)-NT_0(y1,y2,y3,y4);}
}
int main(int y1,int y2,int y3,int y4){ return Start(y1,y2,y3,y4);}