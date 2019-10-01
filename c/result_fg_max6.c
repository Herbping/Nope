#include <stdbool.h>
bool BNT_4(int x1,int x2,int x3,int x4,int x5,int x6){
	if (__VERIFIER_nondet_int()) {return NT_0(x1,x2,x3,x4,x5,x6)<=Start(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_1(x1,x2,x3,x4,x5,x6)<=NT_3(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_2(x1,x2,x3,x4,x5,x6)<=NT_2(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_3(x1,x2,x3,x4,x5,x6)<=NT_1(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return BNT_0(x1,x2,x3,x4,x5,x6)&&BNT_4(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return BNT_1(x1,x2,x3,x4,x5,x6)&&BNT_3(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return BNT_2(x1,x2,x3,x4,x5,x6)&&BNT_2(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return BNT_3(x1,x2,x3,x4,x5,x6)&&BNT_1(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return !BNT_4(x1,x2,x3,x4,x5,x6);}
}
bool BNT_3(int x1,int x2,int x3,int x4,int x5,int x6){
	if (__VERIFIER_nondet_int()) {return NT_0(x1,x2,x3,x4,x5,x6)<=NT_3(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_1(x1,x2,x3,x4,x5,x6)<=NT_2(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_2(x1,x2,x3,x4,x5,x6)<=NT_1(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return BNT_0(x1,x2,x3,x4,x5,x6)&&BNT_3(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return BNT_1(x1,x2,x3,x4,x5,x6)&&BNT_2(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return BNT_2(x1,x2,x3,x4,x5,x6)&&BNT_1(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return !BNT_3(x1,x2,x3,x4,x5,x6);}
}
bool BNT_2(int x1,int x2,int x3,int x4,int x5,int x6){
	if (__VERIFIER_nondet_int()) {return NT_0(x1,x2,x3,x4,x5,x6)<=NT_2(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_1(x1,x2,x3,x4,x5,x6)<=NT_1(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return BNT_0(x1,x2,x3,x4,x5,x6)&&BNT_2(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return BNT_1(x1,x2,x3,x4,x5,x6)&&BNT_1(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return !BNT_2(x1,x2,x3,x4,x5,x6);}
}
bool BNT_1(int x1,int x2,int x3,int x4,int x5,int x6){
	if (__VERIFIER_nondet_int()) {return NT_0(x1,x2,x3,x4,x5,x6)<=NT_1(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return BNT_0(x1,x2,x3,x4,x5,x6)&&BNT_1(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return !BNT_1(x1,x2,x3,x4,x5,x6);}
}
bool BNT_0(int x1,int x2,int x3,int x4,int x5,int x6){
	if (__VERIFIER_nondet_int()) {return NT_0(x1,x2,x3,x4,x5,x6)<=NT_0(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return BNT_0(x1,x2,x3,x4,x5,x6)&&BNT_0(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return !BNT_0(x1,x2,x3,x4,x5,x6);}
}
int Start(int x1,int x2,int x3,int x4,int x5,int x6){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return x1;}
	if (__VERIFIER_nondet_int()) {return x2;}
	if (__VERIFIER_nondet_int()) {return x3;}
	if (__VERIFIER_nondet_int()) {return x4;}
	if (__VERIFIER_nondet_int()) {return x5;}
	if (__VERIFIER_nondet_int()) {return x6;}
	if (__VERIFIER_nondet_int()) {return NT_0(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_1(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_2(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_3(x1,x2,x3,x4,x5,x6);}
	if (BNT_0(x1,x2,x3,x4,x5,x6)) {return NT_0(x1,x2,x3,x4,x5,x6);} else {return NT_3(x1,x2,x3,x4,x5,x6);}
	if (BNT_0(x1,x2,x3,x4,x5,x6)) {return NT_1(x1,x2,x3,x4,x5,x6);} else {return NT_2(x1,x2,x3,x4,x5,x6);}
	if (BNT_0(x1,x2,x3,x4,x5,x6)) {return NT_2(x1,x2,x3,x4,x5,x6);} else {return NT_1(x1,x2,x3,x4,x5,x6);}
	if (BNT_1(x1,x2,x3,x4,x5,x6)) {return NT_0(x1,x2,x3,x4,x5,x6);} else {return NT_2(x1,x2,x3,x4,x5,x6);}
	if (BNT_1(x1,x2,x3,x4,x5,x6)) {return NT_1(x1,x2,x3,x4,x5,x6);} else {return NT_1(x1,x2,x3,x4,x5,x6);}
	if (BNT_2(x1,x2,x3,x4,x5,x6)) {return NT_0(x1,x2,x3,x4,x5,x6);} else {return NT_1(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_0(x1,x2,x3,x4,x5,x6)+Start(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_1(x1,x2,x3,x4,x5,x6)+NT_3(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_2(x1,x2,x3,x4,x5,x6)+NT_2(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_3(x1,x2,x3,x4,x5,x6)+NT_1(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_0(x1,x2,x3,x4,x5,x6)-Start(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_1(x1,x2,x3,x4,x5,x6)-NT_3(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_2(x1,x2,x3,x4,x5,x6)-NT_2(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_3(x1,x2,x3,x4,x5,x6)-NT_1(x1,x2,x3,x4,x5,x6);}
}
int NT_3(int x1,int x2,int x3,int x4,int x5,int x6){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return x1;}
	if (__VERIFIER_nondet_int()) {return x2;}
	if (__VERIFIER_nondet_int()) {return x3;}
	if (__VERIFIER_nondet_int()) {return x4;}
	if (__VERIFIER_nondet_int()) {return x5;}
	if (__VERIFIER_nondet_int()) {return x6;}
	if (__VERIFIER_nondet_int()) {return NT_0(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_1(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_2(x1,x2,x3,x4,x5,x6);}
	if (BNT_0(x1,x2,x3,x4,x5,x6)) {return NT_0(x1,x2,x3,x4,x5,x6);} else {return NT_2(x1,x2,x3,x4,x5,x6);}
	if (BNT_0(x1,x2,x3,x4,x5,x6)) {return NT_1(x1,x2,x3,x4,x5,x6);} else {return NT_1(x1,x2,x3,x4,x5,x6);}
	if (BNT_1(x1,x2,x3,x4,x5,x6)) {return NT_0(x1,x2,x3,x4,x5,x6);} else {return NT_1(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_0(x1,x2,x3,x4,x5,x6)+NT_3(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_1(x1,x2,x3,x4,x5,x6)+NT_2(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_2(x1,x2,x3,x4,x5,x6)+NT_1(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_0(x1,x2,x3,x4,x5,x6)-NT_3(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_1(x1,x2,x3,x4,x5,x6)-NT_2(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_2(x1,x2,x3,x4,x5,x6)-NT_1(x1,x2,x3,x4,x5,x6);}
}
int NT_2(int x1,int x2,int x3,int x4,int x5,int x6){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return x1;}
	if (__VERIFIER_nondet_int()) {return x2;}
	if (__VERIFIER_nondet_int()) {return x3;}
	if (__VERIFIER_nondet_int()) {return x4;}
	if (__VERIFIER_nondet_int()) {return x5;}
	if (__VERIFIER_nondet_int()) {return x6;}
	if (__VERIFIER_nondet_int()) {return NT_0(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_1(x1,x2,x3,x4,x5,x6);}
	if (BNT_0(x1,x2,x3,x4,x5,x6)) {return NT_0(x1,x2,x3,x4,x5,x6);} else {return NT_1(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_0(x1,x2,x3,x4,x5,x6)+NT_2(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_1(x1,x2,x3,x4,x5,x6)+NT_1(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_0(x1,x2,x3,x4,x5,x6)-NT_2(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_1(x1,x2,x3,x4,x5,x6)-NT_1(x1,x2,x3,x4,x5,x6);}
}
int NT_1(int x1,int x2,int x3,int x4,int x5,int x6){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return x1;}
	if (__VERIFIER_nondet_int()) {return x2;}
	if (__VERIFIER_nondet_int()) {return x3;}
	if (__VERIFIER_nondet_int()) {return x4;}
	if (__VERIFIER_nondet_int()) {return x5;}
	if (__VERIFIER_nondet_int()) {return x6;}
	if (__VERIFIER_nondet_int()) {return NT_0(x1,x2,x3,x4,x5,x6);}
	if (BNT_0(x1,x2,x3,x4,x5,x6)) {return NT_0(x1,x2,x3,x4,x5,x6);} else {return NT_0(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_0(x1,x2,x3,x4,x5,x6)+NT_1(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_0(x1,x2,x3,x4,x5,x6)-NT_1(x1,x2,x3,x4,x5,x6);}
}
int NT_0(int x1,int x2,int x3,int x4,int x5,int x6){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return x1;}
	if (__VERIFIER_nondet_int()) {return x2;}
	if (__VERIFIER_nondet_int()) {return x3;}
	if (__VERIFIER_nondet_int()) {return x4;}
	if (__VERIFIER_nondet_int()) {return x5;}
	if (__VERIFIER_nondet_int()) {return x6;}
	if (__VERIFIER_nondet_int()) {return NT_0(x1,x2,x3,x4,x5,x6)+NT_0(x1,x2,x3,x4,x5,x6);}
	if (__VERIFIER_nondet_int()) {return NT_0(x1,x2,x3,x4,x5,x6)-NT_0(x1,x2,x3,x4,x5,x6);}
}
int main(int x1,int x2,int x3,int x4,int x5,int x6){ return Start(x1,x2,x3,x4,x5,x6);}