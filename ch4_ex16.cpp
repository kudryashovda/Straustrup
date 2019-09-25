#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> A = {1,4,3,5,7,3,2,6,4,7,3,4,2,
        3,5,6,7,4,3,2,5,7,8,9,5,4,3,2,4,6,8,3,5,4,3,2};

    int counts = 0; int moda = 0; int max = 0;

    for (int k = 0; k < A.size(); ++k) {
        counts = 0;
        for (int i = 0; i < A.size(); ++i)
            if (A[i] == A[k]) ++counts;
        if (counts > max) {max = counts; moda = A[k];}
    }   

    cout << "Moda is " << moda << endl;
    cout << "The number was found " << max << " times" << endl;
}
