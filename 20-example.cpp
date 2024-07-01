#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int j,k;
	j = a + b;
	k = a + c;
	if(j > k){
		c-=a;
		cout<<c;
	}else{
		b-=a;
		cout<<b;
	}
}
