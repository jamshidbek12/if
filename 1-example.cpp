#include <iostream>
using namespace std;

int main(){
	int son;
	cout<<"Qandaydir son kiriting : ";
	cin>>son;
	
	if(son > 0){
		son++;
		cout<<"Musbat = "<<son;
	} else{
		cout<<"Manfiy = "<<son;
	}
}
