#include <iostream>
#include <vector>

using namespace std;

void print(const string&, const vector<string>&);
void swap1(const vector<int>);
void swap2(vector<int>&);

void print(const string& str, const vector<string>& v) {
    cout << str << endl;
    for (auto it: v) cout << it << endl;
};

void swap1(const vector<string> v) {
    vector<string> w;
    
    for(int i = v.size(); i > 0; --i)
        w.push_back(v[i-1]);

    print("", w);
}

void swap2(vector<string>& v) {
    string tmp;
    int vlast = v.size() - 1;
    
    for(size_t i = 0; i < (v.size() / 2); ++i) {
        tmp = v[i];
        v[i] = v[vlast-i];
        v[vlast-i] = tmp;
    }
}

int main() {
    vector<string> w = {
        "cow",
        "rabbit",
        "dog",
        "cat",
        "beaver" };
        
    print("", w);

    swap1(w);
    
    swap2(w);
    print("", w);
}
