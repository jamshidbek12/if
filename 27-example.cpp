#include <iostream>
using namespace std;

int main(){
	float x,f;
	cin>>x;
	
	if (x < 0) {
        f = 0;
    } else if ((x >= 0 && x < 1) || (x >= 2 && x < 3)) {
        f = 1;
    } else if ((x >= 1 && x < 2) || (x >= 3 && x < 4)) {
        f = -1;
    } else {
    	cout<<"Error";
    }
	cout<<f;
}
