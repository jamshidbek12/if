#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	if(n == 0){
		cout<<"son nolga teng";
	}else if(n>0){
		if(n%2 == 0){
			cout<<"musbat juft son";
		}else{
			cout<<"musbat toq son";
		}
	}else{
		if(n%2 == 0){
			cout<<"manfiy juft son";
		}else{
			cout<<"manfiy toq son";
		}
	}
}
