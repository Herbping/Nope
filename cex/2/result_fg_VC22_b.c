#include <stdbool.h>
int I_0;
bool B_0;
int I_1;
bool B_1;
bool BNT_0(int x1_0,int x2_0,int x1_1,int x2_1){
	if (__VERIFIER_nondet_int()) {
		Start(x1_0,x2_0,x1_1,x2_1);
		int tempL_0 = I_0
		int tempL_1 = I_1
		Start(x1_0,x2_0,x1_1,x2_1);
		int tempR_0 = I_0
		int tempR_1 = I_1
		B_0 = tempL_0<=tempR_0;
		B_1 = tempL_1<=tempR_1;
		return -1;}
	if (__VERIFIER_nondet_int()) {
		Start(x1_0,x2_0,x1_1,x2_1);
		bool tempL_0 = B_0
		bool tempL_1 = B_1
		Start(x1_0,x2_0,x1_1,x2_1);
		bool tempR_0 = B_0
		bool tempR_1 = B_1
		B_0 = tempL_0&&tempR_0;
		B_1 = tempL_1&&tempR_1;
		return -1;}
	if (__VERIFIER_nondet_int()) {
		Start(x1_0,x2_0,x1_1,x2_1);
		bool tempL_0 = B_0
		bool tempL_1 = B_1
		B_0 = !tempL_0;
		B_1 = !tempL_1;
		return -1;}
}
int Start(int x1_0,int x2_0,int x1_1,int x2_1){
	if (__VERIFIER_nondet_int()) {
		I_0 = 0;
		I_1 = 0;
		return -1;}
	if (__VERIFIER_nondet_int()) {
		I_0 = 1;
		I_1 = 1;
		return -1;}
	if (__VERIFIER_nondet_int()) {
		I_0 = x1_0;}
		I_1 = x1_1;}
		return -1;}
	if (__VERIFIER_nondet_int()) {
		I_0 = x2_0;}
		I_1 = x2_1;}
		return -1;}
	if (__VERIFIER_nondet_int()) {
		Start(x1_0,x2_0,x1_1,x2_1);
		int tempL_0=I_0;
		int tempL_1=I_1;
		Start(x1_0,x2_0,x1_1,x2_1);
		int tempR_0=I_0;
		int tempR_1=I_1;
		I_0 = tempL_0+tempR_0;
		I_1 = tempL_1+tempR_1;
		return -1;}
	if (__VERIFIER_nondet_int()) {
		Start(x1_0,x2_0,x1_1,x2_1);
		int tempL_0=I_0;
		int tempL_1=I_1;
		Start(x1_0,x2_0,x1_1,x2_1);
		int tempR_0=I_0;
		int tempR_1=I_1;
		I_0 = tempL_0-tempR_0;
		I_1 = tempL_1-tempR_1;
		return -1;}
}
int main(){
	int x1_0 = __VERIFIER_nondet_int();
	int x2_0 = __VERIFIER_nondet_int();
	int x1_1 = __VERIFIER_nondet_int();
	int x2_1 = __VERIFIER_nondet_int();
	Start(x1_0,x2_0,x1_1,x2_1);
	int spec_out_0 = spec(x1_0,x2_0);
	int spec_out_1 = spec(x1_1,x2_1);
	__VERIFIER_assert(I_0!=spec_out_0||I_1!=spec_out_1);
}