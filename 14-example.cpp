#include <iostream>
using namespace std;

int main() {
	
	int a,b,c;
	int max = 0;
	cin>>a>>b>>c;	
	int min = 0;
	if(a>b && c>b){
		min += b;
		cout<<min<<endl;
	}else if(b>a && c>a){
		min += a;
		cout<<min<<endl;
	}else{
		min += c;
		cout<<min<<endl;
	}
	if(a<b && c<b){
		max += b;
		cout<<max<<endl;
	}else if(b<a && c<a){
		max += a;
		cout<<max<<endl;
	}else{
		max += c;
		cout<<max<<endl;
	}
}
