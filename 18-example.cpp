#include <iostream>
using namespace std;

int main (){
	int a,b,c;
	cin>>a>>b>>c;
	if(a == b){
		cout<<3;
	}else if(a == c){
		cout<<2;
	}else if(c == b){
		cout<<1;
	}else{
		cout<<"FALSE";
	}
}
