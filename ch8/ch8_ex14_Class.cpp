#include <iostream>
#include <vector>
#include <algorithm> // min max

using namespace std;

class Stat {
public:
    Stat(vector<string>& vs);
    void print();
    string getLongestString();
    string getShortestString();
    string getPrimAlfabeticString();
    string getLatestAlfabeticString();
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

string Stat::getLongestString() {
    auto it = max_element( s.begin(), s.end() );
    int i = distance(s.begin(), it);

    return v[i];
}

string Stat::getShortestString() {
    auto it = min_element( s.begin(), s.end() );
    int i = distance(s.begin(), it);

    return v[i];
}

string Stat::getPrimAlfabeticString() {
    string prim = v.front();
    for(auto it: v) if (it < prim) prim = it;

    return prim;
}

string Stat::getLatestAlfabeticString() {
    string late = v.front();
    for(auto it: v) if (it > late) late = it;

    return late;
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

    cout << "\nthe longest string is " << s.getLongestString() << endl;
    cout << "the shortest string is " << s.getShortestString() << endl;
    cout << "the primary alfabetic string is " << s.getPrimAlfabeticString() << endl;
    cout << "the latest alfabetic string is " << s.getLatestAlfabeticString() << endl;
}
