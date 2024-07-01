#include <iostream>
using namespace std;

int main (){
	int a,b,c;
	cin>>a>>b>>c;
	
	if(a<b && b<c){
		a*=2;
		b*=2;
		c*=2;
		cout<<a<<endl;
		cout<<b<<endl;
		cout<<c;
	}else if(a>b && b>c){
		a*=2;
		b*=2;
		c*=2;
		cout<<a<<endl;
		cout<<b<<endl;
		cout<<c;
	}else{
		a*=-1;
		b*=-1;
		c*=-1;
		cout<<a<<endl;
		cout<<b<<endl;
		cout<<c;
	}
}
