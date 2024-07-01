#include <iostream>

using namespace std;

int main() {
    int n;
    int count = 0;

    cout << "Butun sonlar sonini kiriting: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int num;
        cout << "Birorta son kiriting: ";
        cin >> num;
        
        if (num > 0) {
            count++;
        }
    }
    cout << "Musbat sonlar soni: " << count << endl;

    return 0;
}
