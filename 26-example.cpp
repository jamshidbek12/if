#include <iostream>
using namespace std;

int main(){
	float x,y;
	cin>>x;
	if(x<=0){
		cout<<x;
	}else if(0<x && x<2){
		cout<<x*x;
	}else{
		cout<<4;
	}
}
