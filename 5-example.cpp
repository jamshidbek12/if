#include <iostream>

using namespace std;

int main() {
    int n;
    int count = 0, s = 0;

    cout << "Butun sonlar sonini kiriting: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int num;
        cout << "Birorta son kiriting: ";
        cin >> num;
        
        if (num > 0) {
            count++;
        }else if(num < 0) {
        	s++;
		}
    }
    cout << "Musbat sonlar soni: " << count << endl;
    cout << "Manfiy sonlar soni: " << s << endl;

    return 0;
}
