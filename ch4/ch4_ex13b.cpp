#include <iostream>
#include <vector>

using namespace std;

vector<bool> A;

int main() {
    cout << "Programm for prime numbres seaching based on wikipedia optimized code\n";

    const int n = 100;
    
    for (int i = 0; i < n; ++i) A.push_back(true);

    for (int i = 2; i*i <=n; ++i) {
        if (A[i]) {
            int a = 0;
            for (int j = i*i; j <= n; j = i*i + a*i) {    
                A[j] = false;
                ++a;
            }
        }
    }

    for (int i = 2; i < n; ++i) if (A[i]) cout << i << ' ' ;
    cout << endl;

}
