#include <stdbool.h>
int I_0;
bool B_0;
int I_1;
bool B_1;
int I_2;
bool B_2;
bool BNT_0(int x1_0,int x2_0,int x1_1,int x2_1,int x1_2,int x2_2){
	if (__VERIFIER_nondet_int()) {
		Start(x1_0,x2_0,x1_1,x2_1,x1_2,x2_2);
		int tempL_0 = I_0;
		int tempL_1 = I_1;
		int tempL_2 = I_2;
		Start(x1_0,x2_0,x1_1,x2_1,x1_2,x2_2);
		int tempR_0 = I_0;
		int tempR_1 = I_1;
		int tempR_2 = I_2;
		B_0 = tempL_0<=tempR_0;
		B_1 = tempL_1<=tempR_1;
		B_2 = tempL_2<=tempR_2;
		return -1;}
	if (__VERIFIER_nondet_int()) {
		Start(x1_0,x2_0,x1_1,x2_1,x1_2,x2_2);
		bool tempL_0 = B_0;
		bool tempL_1 = B_1;
		bool tempL_2 = B_2;
		Start(x1_0,x2_0,x1_1,x2_1,x1_2,x2_2);
		bool tempR_0 = B_0;
		bool tempR_1 = B_1;
		bool tempR_2 = B_2;
		B_0 = tempL_0&&tempR_0;
		B_1 = tempL_1&&tempR_1;
		B_2 = tempL_2&&tempR_2;
		return -1;}
	if (__VERIFIER_nondet_int()) {
		Start(x1_0,x2_0,x1_1,x2_1,x1_2,x2_2);
		bool tempL_0 = B_0;
		bool tempL_1 = B_1;
		bool tempL_2 = B_2;
		B_0 = !tempL_0;
		B_1 = !tempL_1;
		B_2 = !tempL_2;
		return -1;}
}
int Start(int x1_0,int x2_0,int x1_1,int x2_1,int x1_2,int x2_2){
	if (__VERIFIER_nondet_int()) {
		I_0 = 0;
		I_1 = 0;
		I_2 = 0;
		return -1;}
	if (__VERIFIER_nondet_int()) {
		I_0 = 1;
		I_1 = 1;
		I_2 = 1;
		return -1;}
	if (__VERIFIER_nondet_int()) {
		I_0 = x1_0;
		I_1 = x1_1;
		I_2 = x1_2;
		return -1;}
	if (__VERIFIER_nondet_int()) {
		I_0 = x2_0;
		I_1 = x2_1;
		I_2 = x2_2;
		return -1;}
	if (__VERIFIER_nondet_int()) {
		Start(x1_0,x2_0,x1_1,x2_1,x1_2,x2_2);
		int tempL_0=I_0;
		int tempL_1=I_1;
		int tempL_2=I_2;
		Start(x1_0,x2_0,x1_1,x2_1,x1_2,x2_2);
		int tempR_0=I_0;
		int tempR_1=I_1;
		int tempR_2=I_2;
		I_0 = tempL_0+tempR_0;
		I_1 = tempL_1+tempR_1;
		I_2 = tempL_2+tempR_2;
		return -1;}
	if (__VERIFIER_nondet_int()) {
		Start(x1_0,x2_0,x1_1,x2_1,x1_2,x2_2);
		int tempL_0=I_0;
		int tempL_1=I_1;
		int tempL_2=I_2;
		Start(x1_0,x2_0,x1_1,x2_1,x1_2,x2_2);
		int tempR_0=I_0;
		int tempR_1=I_1;
		int tempR_2=I_2;
		I_0 = tempL_0-tempR_0;
		I_1 = tempL_1-tempR_1;
		I_2 = tempL_2-tempR_2;
		return -1;}
}
int main(){
	int x1_0 = __VERIFIER_nondet_int();
	int x2_0 = __VERIFIER_nondet_int();
	int x1_1 = __VERIFIER_nondet_int();
	int x2_1 = __VERIFIER_nondet_int();
	int x1_2 = __VERIFIER_nondet_int();
	int x2_2 = __VERIFIER_nondet_int();
	Start(x1_0,x2_0,x1_1,x2_1,x1_2,x2_2);
	int spec_out_0 = spec(x1_0,x2_0);
	int spec_out_1 = spec(x1_1,x2_1);
	int spec_out_2 = spec(x1_2,x2_2);
	__VERIFIER_assert(I_0!=spec_out_0||I_1!=spec_out_1||I_2!=spec_out_2);
}