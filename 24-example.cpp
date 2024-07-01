#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float x,f;
	cin>>x;
	
	if(x>0){
		f=2*sin(x);
	}else{
		f=6-x;
	}
	cout<<f;
}
