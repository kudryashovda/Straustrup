#include <iostream>
#include <vector>

using namespace std;

void print(const string&, const vector<int>&);

void fibonacci(int x, int y,vector<int>& v, int n);


void print(const string& str, const vector<int>& v) {
    cout << str << endl;
    for (auto it: v) cout << it << endl;
};

void fibonacci(int x, int y, vector<int>& v, int n) {
    v.push_back(x); // v[0]
    v.push_back(y); // v[1]
    
    for (int i = 2; i < n; ++i)
        v.push_back(v[i-2] + v[i-1]);
    
    print("fibonacci numbers", v);
}


int main() {
    vector<int> w;

    fibonacci(1, 2, w, 10);
}
