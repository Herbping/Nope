
typedef _Bool bool;
extern void __VERIFIER_error (void);
extern int __VERIFIER_nondet_int();
int I_0 = -1;
void  Start(int x_0,int y_0,int z_0,int w_0);
void  StartBool(int x_0,int y_0,int z_0,int w_0);

void Start(int x_0,int y_0,int z_0,int w_0){
	if(__VERIFIER_nondet_int()){
		I_0 = x_0;
		return;}
	if(__VERIFIER_nondet_int()){
		I_0 = y_0;
		return;}
	if(__VERIFIER_nondet_int()){
		I_0 = z_0;
		return;}
	if(__VERIFIER_nondet_int()){
		I_0 = w_0;
		return;}
	if(__VERIFIER_nondet_int()){
		I_0 = 100;
		return;}
	if(__VERIFIER_nondet_int()){
		Start(x_0,y_0,z_0,w_0);
		int temp_1_0 = I_0;
		Start(x_0,y_0,z_0,w_0);
		int temp_0_0 = I_0;
		I_0 = temp_0_0+temp_1_0;
		 return;}
	else{
		StartBool(x_0,y_0,z_0,w_0);
		int temp_2_0 = I_0;
		Start(x_0,y_0,z_0,w_0);
		int temp_1_0 = I_0;
		Start(x_0,y_0,z_0,w_0);
		int temp_0_0 = I_0;
		if(temp_2_0) {I_0=temp_1_0;} else {I_0=temp_0_0;}
		 return;}
}
void StartBool(int x_0,int y_0,int z_0,int w_0){
	if(__VERIFIER_nondet_int()){
		Start(x_0,y_0,z_0,w_0);
		int temp_1_0 = I_0;
		Start(x_0,y_0,z_0,w_0);
		int temp_0_0 = I_0;
		I_0 = temp_0_0>=temp_1_0;
		 return;}
	else{
		Start(x_0,y_0,z_0,w_0);
		int temp_1_0 = I_0;
		Start(x_0,y_0,z_0,w_0);
		int temp_0_0 = I_0;
		I_0 = temp_0_0>=temp_1_0;
		 return;}
}


int main(){
int x_0 = 0;
int y_0 = 0;
int z_0 = 0;
int w_0 = 0;

Start(x_0,y_0,z_0,w_0);
bool spec_out_0 = I_0==-99;
(void)((!spec_out_0)||(__VERIFIER_error (), 0));
}