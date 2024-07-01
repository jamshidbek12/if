#include <iostream>
using namespace std;

int main() {
	
	int a,b,c;
	int max = 0;
	cin>>a>>b>>c;	
	if(a<b && c<b){
		max += b + ((a+b+c)/3);
		cout<<max<<endl;
	}else if(b<a && c<a){
		max += a + ((a+b+c)/3);
		cout<<max<<endl;
	}else{
		max += c + ((a+b+c)/3);
		cout<<max<<endl;
	}
}
