#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> A = {7,4,3,5,7,3,2,6,4,7,3,4,2,
        3,5,6,7,4,3,2,5,7,8,9,5,4,3,2,4,6,8,3,5,4,3,2};

    int min = A[0]; int max = A[0];

    for (int i = 0; i < A.size(); ++i) {
        if (A[i] > max) max = A[i];
        if (A[i] < min) min = A[i];
    }
        
    cout << "Max is " << max << endl;
    cout << "Min is " << min << endl;
}
