#include <iostream>
using namespace std;

int main(){
	float x,f;
	cin>>x;
	
	if(x<-2 || x>2){
		f=2*x;
	}else{
		f=-3*x;
	}
	cout<<f;
}
