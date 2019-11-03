#include <iostream>
#include <vector>

using namespace std;

class Stat {
public:
    Stat(vector<string>& vs) : v(vs) {};
    void print();
    string getLongestString();
    string getShortestString();
    string getPrimAlfabeticString();
    string getLatestAlfabeticString();
private:
    const vector<string>& v;
};

void Stat::print() {
    for(auto it:v) cout << it << endl;
}

string Stat::getLongestString() {
    string sl = "";
    long unsigned int maxs = v.front().size();
    
    for(auto it: v)
        if (it.size() > maxs) { maxs = it.size(); sl = it; }

    return sl;
}

string Stat::getShortestString() {
    string ss = "";
    long unsigned int mins = v.front().size();
    
    for(auto it: v)
        if (it.size() < mins) { mins = it.size(); ss = it; }

    return ss;
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
