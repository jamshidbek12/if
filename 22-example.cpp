#include <iostream>
using namespace std;

int main (){
	int x,y;
	cin>>x>>y;
	if(x>0 && y>0){
		cout<<"1 - chorak";
	}else if(x<0 && y>0){
		cout<<"2 - chorak";
	}else if(x<0 && y<0){
		cout<<"3 - chorak";
	}else{
		cout<<"4 - chorak";
	}
}

