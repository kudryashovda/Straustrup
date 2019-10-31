#include <iostream>
#include <vector>

using namespace std;

void print(const string&, const vector<int>&);

void print(const string& str, const vector<int>& v) {
    cout << str << endl;
    for (auto it: v) cout << it << endl;
};

int main() {
    vector<int> w = {0,3,5,2,6,8,4,2,6};

    print("comments", w);
}
