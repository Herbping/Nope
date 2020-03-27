
typedef _Bool bool;
extern void __VERIFIER_error (void);
extern int __VERIFIER_nondet_int();
int I_0 = -1;
int I_1 = -1;
void  Start(int x_0,int y_0,int x_1,int y_1);
void  NT4(int x_0,int y_0,int x_1,int y_1);

void Start(int x_0,int y_0,int x_1,int y_1){
	if(__VERIFIER_nondet_int()){
		I_0 = x_0;
		I_1 = x_1;
		return;}
	if(__VERIFIER_nondet_int()){
		I_0 = y_0;
		I_1 = y_1;
		return;}
	if(__VERIFIER_nondet_int()){
		I_0 = 0;
		I_1 = 0;
		return;}
	if(__VERIFIER_nondet_int()){
		I_0 = 1;
		I_1 = 1;
		return;}
	else{
		NT4(x_0,y_0,x_1,y_1);
		int temp_2_0 = I_0;
		int temp_2_1 = I_1;
		Start(x_0,y_0,x_1,y_1);
		int temp_1_0 = I_0;
		int temp_1_1 = I_1;
		Start(x_0,y_0,x_1,y_1);
		int temp_0_0 = I_0;
		int temp_0_1 = I_1;
		if(temp_2_0) {I_0=temp_1_0;} else {I_0=temp_0_0;}
		if(temp_2_1) {I_1=temp_1_1;} else {I_1=temp_0_1;}
		 return;}
}
void NT4(int x_0,int y_0,int x_1,int y_1){
		Start(x_0,y_0,x_1,y_1);
		int temp_1_0 = I_0;
		int temp_1_1 = I_1;
		Start(x_0,y_0,x_1,y_1);
		int temp_0_0 = I_0;
		int temp_0_1 = I_1;
		I_0 = temp_0_0>=temp_1_0;
		I_1 = temp_0_1>=temp_1_1;
		 return;
}


int main(){
int x_0 = 17;
int y_0 = -6;

int x_1 = -8;
int y_1 = 3;

Start(x_0,y_0,x_1,y_1);
bool spec_out_0 = I_0==11;
bool spec_out_1 = I_1==-5;
(void)((!spec_out_0||!spec_out_1)||(__VERIFIER_error (), 0));
}
