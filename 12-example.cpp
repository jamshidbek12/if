#include <iostream>
using namespace std;

int main() {
	
	int a,b,c;
	cin>>a>>b>>c;	
	if(a>b && c>b){
		cout<<b;
	}else if(b>a && c>a){
		cout<<a;
	}else{
		cout<<c;
	}
}
