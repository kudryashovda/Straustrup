#include <iostream>

using namespace std;

int main() {
    cout << "Enter seeds quantity: \n" ;
    int n;
    cin >> n;

    int summ = 0;
    int seeds = 1;
    
    for (int i = 1; i < 64; ++i) {
        cout << i << ' ' << seeds << ' ' << summ << endl;
        summ += seeds;
        seeds *= 2;
        if (summ >= n) {
            cout << "Hay que " << i << " cells" << endl; break; }    
    }
}
