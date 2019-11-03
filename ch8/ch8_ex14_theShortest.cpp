#include <iostream>
#include <vector>
#include <algorithm> // min max

using namespace std;

int main() {
    vector<string> v = {
        "milk",
        "orange juice",
        "water",
        "fanta",
        "tea" };
    
    for(auto it: v) cout << it << endl;

    vector<int> s; // vector of string sizes
    for(auto it: v) s.push_back(it.size() );

    auto it = minmax_element( s.begin(), s.end() );
    int i = distance(s.begin(), it.first);
    int k = distance(s.begin(), it.second);
    string shortest = v[i];
    string longest = v[k];

    string primary = v.front();
    for(auto it: v) if (it < primary) primary = it;
    string latest = v.front();;
    for(auto it: v) if (it > latest) latest = it;
    
    cout << "\nthe longest string is " << longest << endl;
    cout << "the shortest string is " << shortest << endl;
    cout << "the primary alfabetic string is " << primary << endl;
    cout << "the latest alfabetic string is " << latest << endl;
}
