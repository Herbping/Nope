#include <stdbool.h>
bool BNT_2(int x,int y,int z,int z1){
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,z1)<=Start(x,y,z,z1);}
	if (__VERIFIER_nondet_int()) {return NT_1(x,y,z,z1)<=NT_1(x,y,z,z1);}
	if (__VERIFIER_nondet_int()) {return BNT_0(x,y,z,z1)&&BNT_2(x,y,z,z1);}
	if (__VERIFIER_nondet_int()) {return BNT_1(x,y,z,z1)&&BNT_1(x,y,z,z1);}
	if (__VERIFIER_nondet_int()) {return !BNT_2(x,y,z,z1);}
}
bool BNT_1(int x,int y,int z,int z1){
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,z1)<=NT_1(x,y,z,z1);}
	if (__VERIFIER_nondet_int()) {return BNT_0(x,y,z,z1)&&BNT_1(x,y,z,z1);}
	if (__VERIFIER_nondet_int()) {return !BNT_1(x,y,z,z1);}
}
bool BNT_0(int x,int y,int z,int z1){
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,z1)<=NT_0(x,y,z,z1);}
	if (__VERIFIER_nondet_int()) {return BNT_0(x,y,z,z1)&&BNT_0(x,y,z,z1);}
	if (__VERIFIER_nondet_int()) {return !BNT_0(x,y,z,z1);}
}
int Start(int x,int y,int z,int z1){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return x;}
	if (__VERIFIER_nondet_int()) {return y;}
	if (__VERIFIER_nondet_int()) {return z;}
	if (__VERIFIER_nondet_int()) {return z1;}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,z1);}
	if (__VERIFIER_nondet_int()) {return NT_1(x,y,z,z1);}
	if (BNT_0(x,y,z,z1)) {return NT_0(x,y,z,z1);} else {return NT_1(x,y,z,z1);}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,z1)+Start(x,y,z,z1);}
	if (__VERIFIER_nondet_int()) {return NT_1(x,y,z,z1)+NT_1(x,y,z,z1);}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,z1)-Start(x,y,z,z1);}
	if (__VERIFIER_nondet_int()) {return NT_1(x,y,z,z1)-NT_1(x,y,z,z1);}
}
int NT_1(int x,int y,int z,int z1){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return x;}
	if (__VERIFIER_nondet_int()) {return y;}
	if (__VERIFIER_nondet_int()) {return z;}
	if (__VERIFIER_nondet_int()) {return z1;}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,z1);}
	if (BNT_0(x,y,z,z1)) {return NT_0(x,y,z,z1);} else {return NT_0(x,y,z,z1);}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,z1)+NT_1(x,y,z,z1);}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,z1)-NT_1(x,y,z,z1);}
}
int NT_0(int x,int y,int z,int z1){
	if (__VERIFIER_nondet_int()) {return 0;}
	if (__VERIFIER_nondet_int()) {return 1;}
	if (__VERIFIER_nondet_int()) {return x;}
	if (__VERIFIER_nondet_int()) {return y;}
	if (__VERIFIER_nondet_int()) {return z;}
	if (__VERIFIER_nondet_int()) {return z1;}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,z1)+NT_0(x,y,z,z1);}
	if (__VERIFIER_nondet_int()) {return NT_0(x,y,z,z1)-NT_0(x,y,z,z1);}
}
int main(int x,int y,int z,int z1){ return Start(x,y,z,z1);}