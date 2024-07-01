#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Siz 1 va 999 oraligidagi son kiritishingiz kerak : "<<endl;
	cin>>n;
	
	if(n>=100 && n<1000){
		if(n%2 == 0){
			cout<<"uch xonali juft son";
		}else {
			cout<<"uch xonali toq son";
		}
	}else if(n>=10 && n<100){
		if(n%2 ==0){
			cout<<"ikki xonali juft son";
		}else {
			cout<<"ikki xonali toq son";
		}
	}else if(n>=1 && n<10){
		if(n%2 == 0){
			cout<<"bir xonali juft son";
		}else{
			cout<<"bir xonali toq son";
		}
	}else {
		cout<<"Siz 1 va 999 oraligidagi son kiritmadingiz";
	}
		
		
}
