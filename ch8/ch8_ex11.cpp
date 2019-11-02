#include<iostream>
#include<vector>

using namespace std;

int maxv(const vector<int>& v) {
    int max = v[0];

    for(auto it: v)
        if (it > max) max = it;

    return max;
}

int main() {

    vector<int> v = {3,5,4,2,6,8,3,5,3,6,8}; 

    cout << "max = " << maxv(v);
}
