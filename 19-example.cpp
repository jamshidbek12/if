#include <iostream>
using namespace std;

int main (){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a == b && b == c){
		cout<<4;
	}else if(a == b && b ==d){
		cout<<3;
	}else if(a == c && c ==d){
		cout<<2;
	}else if(b == c && c == d){
		cout<<1;
	}else{
		cout<<"FALSE";
	}
}
