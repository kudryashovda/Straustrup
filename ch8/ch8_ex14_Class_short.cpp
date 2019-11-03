#include <iostream>
#include <vector>
#include <algorithm> // min max

using namespace std;

class Stat {
public:
    Stat(vector<string>& vs);
    void print();
    string getString(string);
private:
    const vector<string>& v;
    vector<int> s; // vector of string sizes
};

Stat::Stat(vector<string>& vs) : v(vs) {
    for(auto it: v) s.push_back(it.size() ); // ones on create
} 

void Stat::print() {
    for(auto it: v) cout << it << endl;
}

string Stat::getString(string str) {
    string target = v.front();
    vector<int>::iterator it = s.begin();

    if (str == "longest")  it = max_element( s.begin(), s.end() );
    if (str == "shortest")  it = min_element( s.begin(), s.end() );
    int i = distance(s.begin(), it);
    target = v[i];

    if (str == "primary") for(auto it: v) if (it < target) target = it;
    if (str == "latest") for(auto it: v) if (it > target) target = it;

    return target;
}


int main() {
    vector<string> vs = {
        "milk",
        "orange juice",
        "water",
        "fanta",
        "tea" };

    Stat s(vs);
    
    s.print();

    cout << "\nthe longest string is " << s.getString("longest") << endl;
    cout << "the shortest string is " << s.getString("shortest") << endl;
    cout << "the primary alfabetic string is " << s.getString("primary") << endl;
    cout << "the latest alfabetic string is " << s.getString("latest") << endl;
}
