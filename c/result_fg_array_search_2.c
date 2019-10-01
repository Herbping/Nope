#include <stdbool.h>
bool BNT_3(int y1,int y2,int k1){
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,k1)<=Start(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return NT_1(y1,y2,k1)<=NT_2(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return NT_2(y1,y2,k1)<=NT_1(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return BNT_0(y1,y2,k1)&&BNT_3(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return BNT_1(y1,y2,k1)&&BNT_2(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return BNT_2(y1,y2,k1)&&BNT_1(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return !BNT_3(y1,y2,k1);}
}
bool BNT_2(int y1,int y2,int k1){
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,k1)<=NT_2(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return NT_1(y1,y2,k1)<=NT_1(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return BNT_0(y1,y2,k1)&&BNT_2(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return BNT_1(y1,y2,k1)&&BNT_1(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return !BNT_2(y1,y2,k1);}
}
bool BNT_1(int y1,int y2,int k1){
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,k1)<=NT_1(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return BNT_0(y1,y2,k1)&&BNT_1(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return !BNT_1(y1,y2,k1);}
}
bool BNT_0(int y1,int y2,int k1){
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,k1)<=NT_0(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return BNT_0(y1,y2,k1)&&BNT_0(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return !BNT_0(y1,y2,k1);}
}
int Start(int y1,int y2,int k1){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return y1;}
	if (__VERIFIER_nondet_int()) {return y2;}
	if (__VERIFIER_nondet_int()) {return k1;}
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return NT_1(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return NT_2(y1,y2,k1);}
	if (BNT_0(y1,y2,k1)) {return NT_0(y1,y2,k1);} else {return NT_2(y1,y2,k1);}
	if (BNT_0(y1,y2,k1)) {return NT_1(y1,y2,k1);} else {return NT_1(y1,y2,k1);}
	if (BNT_1(y1,y2,k1)) {return NT_0(y1,y2,k1);} else {return NT_1(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,k1)+Start(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return NT_1(y1,y2,k1)+NT_2(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return NT_2(y1,y2,k1)+NT_1(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,k1)-Start(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return NT_1(y1,y2,k1)-NT_2(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return NT_2(y1,y2,k1)-NT_1(y1,y2,k1);}
}
int NT_2(int y1,int y2,int k1){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return y1;}
	if (__VERIFIER_nondet_int()) {return y2;}
	if (__VERIFIER_nondet_int()) {return k1;}
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return NT_1(y1,y2,k1);}
	if (BNT_0(y1,y2,k1)) {return NT_0(y1,y2,k1);} else {return NT_1(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,k1)+NT_2(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return NT_1(y1,y2,k1)+NT_1(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,k1)-NT_2(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return NT_1(y1,y2,k1)-NT_1(y1,y2,k1);}
}
int NT_1(int y1,int y2,int k1){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return y1;}
	if (__VERIFIER_nondet_int()) {return y2;}
	if (__VERIFIER_nondet_int()) {return k1;}
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,k1);}
	if (BNT_0(y1,y2,k1)) {return NT_0(y1,y2,k1);} else {return NT_0(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,k1)+NT_1(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,k1)-NT_1(y1,y2,k1);}
}
int NT_0(int y1,int y2,int k1){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return y1;}
	if (__VERIFIER_nondet_int()) {return y2;}
	if (__VERIFIER_nondet_int()) {return k1;}
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,k1)+NT_0(y1,y2,k1);}
	if (__VERIFIER_nondet_int()) {return NT_0(y1,y2,k1)-NT_0(y1,y2,k1);}
}
int main(int y1,int y2,int k1){ return Start(y1,y2,k1);}