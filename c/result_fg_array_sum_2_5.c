#include <stdbool.h>
bool BNT_0(int y1,int y2){
	if (__VERIFIER_nondet_int()) {return Start(y1,y2)<=Start(y1,y2);}
	if (__VERIFIER_nondet_int()) {return BNT_0(y1,y2)&&BNT_0(y1,y2);}
	if (__VERIFIER_nondet_int()) {return !BNT_0(y1,y2);}
}
int Start(int y1,int y2){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return y1;}
	if (__VERIFIER_nondet_int()) {return y2;}
	if (__VERIFIER_nondet_int()) {return Start(y1,y2)+Start(y1,y2);}
	if (__VERIFIER_nondet_int()) {return Start(y1,y2)-Start(y1,y2);}
}
int main(int y1,int y2){ return Start(y1,y2);}