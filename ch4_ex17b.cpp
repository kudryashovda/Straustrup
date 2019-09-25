#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> A = {"day", "cook", "door", "day", "book", "apple",
        "day","root", "cook", "book"};

    int counts = 0; string moda = ""; int max = 0;

    for (int k = 0; k < A.size(); ++k) {
        counts = 0;
        for (int i = 0; i < A.size(); ++i)
            if (A[i] == A[k]) ++counts;
        if (counts > max) {max = counts; moda = A[k];}
    }   

    cout << "Moda is " << moda << endl;
    cout << "The string was found " << max << " times" << endl;
}
