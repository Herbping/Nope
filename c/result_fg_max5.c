#include <stdbool.h>
bool BNT_3(int x,int y,int z,int w,int u){
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,w,u)<=Start(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return NT_1(x,y,z,w,u)<=NT_2(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return NT_2(x,y,z,w,u)<=NT_1(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return BNT_0(x,y,z,w,u)&&BNT_3(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return BNT_1(x,y,z,w,u)&&BNT_2(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return BNT_2(x,y,z,w,u)&&BNT_1(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return !BNT_3(x,y,z,w,u);}
}
bool BNT_2(int x,int y,int z,int w,int u){
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,w,u)<=NT_2(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return NT_1(x,y,z,w,u)<=NT_1(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return BNT_0(x,y,z,w,u)&&BNT_2(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return BNT_1(x,y,z,w,u)&&BNT_1(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return !BNT_2(x,y,z,w,u);}
}
bool BNT_1(int x,int y,int z,int w,int u){
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,w,u)<=NT_1(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return BNT_0(x,y,z,w,u)&&BNT_1(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return !BNT_1(x,y,z,w,u);}
}
bool BNT_0(int x,int y,int z,int w,int u){
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,w,u)<=NT_0(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return BNT_0(x,y,z,w,u)&&BNT_0(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return !BNT_0(x,y,z,w,u);}
}
int Start(int x,int y,int z,int w,int u){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return x;}
	if (__VERIFIER_nondet_int()) {return y;}
	if (__VERIFIER_nondet_int()) {return z;}
	if (__VERIFIER_nondet_int()) {return w;}
	if (__VERIFIER_nondet_int()) {return u;}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return NT_1(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return NT_2(x,y,z,w,u);}
	if (BNT_0(x,y,z,w,u)) {return NT_0(x,y,z,w,u);} else {return NT_2(x,y,z,w,u);}
	if (BNT_0(x,y,z,w,u)) {return NT_1(x,y,z,w,u);} else {return NT_1(x,y,z,w,u);}
	if (BNT_1(x,y,z,w,u)) {return NT_0(x,y,z,w,u);} else {return NT_1(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,w,u)+Start(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return NT_1(x,y,z,w,u)+NT_2(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return NT_2(x,y,z,w,u)+NT_1(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,w,u)-Start(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return NT_1(x,y,z,w,u)-NT_2(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return NT_2(x,y,z,w,u)-NT_1(x,y,z,w,u);}
}
int NT_2(int x,int y,int z,int w,int u){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return x;}
	if (__VERIFIER_nondet_int()) {return y;}
	if (__VERIFIER_nondet_int()) {return z;}
	if (__VERIFIER_nondet_int()) {return w;}
	if (__VERIFIER_nondet_int()) {return u;}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return NT_1(x,y,z,w,u);}
	if (BNT_0(x,y,z,w,u)) {return NT_0(x,y,z,w,u);} else {return NT_1(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,w,u)+NT_2(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return NT_1(x,y,z,w,u)+NT_1(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,w,u)-NT_2(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return NT_1(x,y,z,w,u)-NT_1(x,y,z,w,u);}
}
int NT_1(int x,int y,int z,int w,int u){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return x;}
	if (__VERIFIER_nondet_int()) {return y;}
	if (__VERIFIER_nondet_int()) {return z;}
	if (__VERIFIER_nondet_int()) {return w;}
	if (__VERIFIER_nondet_int()) {return u;}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,w,u);}
	if (BNT_0(x,y,z,w,u)) {return NT_0(x,y,z,w,u);} else {return NT_0(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,w,u)+NT_1(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,w,u)-NT_1(x,y,z,w,u);}
}
int NT_0(int x,int y,int z,int w,int u){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return x;}
	if (__VERIFIER_nondet_int()) {return y;}
	if (__VERIFIER_nondet_int()) {return z;}
	if (__VERIFIER_nondet_int()) {return w;}
	if (__VERIFIER_nondet_int()) {return u;}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,w,u)+NT_0(x,y,z,w,u);}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,w,u)-NT_0(x,y,z,w,u);}
}
int main(int x,int y,int z,int w,int u){ return Start(x,y,z,w,u);}