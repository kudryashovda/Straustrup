#include <iostream>
#include <vector>

using namespace std;

void print(const string&, const vector<int>&);
void swap1(const vector<int>);
void swap2(vector<int>&);

void print(const string& str, const vector<int>& v) {
    cout << str << endl;
    for (auto it: v) cout << it << endl;
};

void swap1(const vector<int> v) {
    vector<int> w;
    
    for(int i = v.size(); i > 0; --i)
        w.push_back(v[i-1]);

    print("", w);
}


void swap2(vector<int>& v) {
    int tmp;
    int vlast = v.size() - 1;
    
    for(size_t i = 0; i < (v.size() / 2); ++i) {
        tmp = v[i];
        v[i] = v[vlast-i];
        v[vlast-i] = tmp;
    }
}

int main() {
    vector<int> w = {1,3,5,7,9,11};
    print("", w);

    swap1(w);
    
    swap2(w);
    print("", w);
}
