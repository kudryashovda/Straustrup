#include <iostream>
#include <vector>
#include <algorithm> // for min, max

using namespace std;

void foo(const vector<string>&, vector<int>&);

void foo(const vector<string>& vs, vector<int>& vi) {
    for(auto it: vs)
        vi.push_back(it.size());
}

int main() {

    vector<string> vs = {
        "milk",
        "orange juice",
        "water",
        "fanta",
        "tea"
    };

    vector<int> vi; // keep size of each string in vs vector

    foo(vs, vi);

    vector<int>::iterator it0;

    it0 = max_element(vi.begin(), vi.end());
    int dmax = distance(vi.begin(), it0);
    cout << "the longest string is " << vs[dmax] << endl;

    it0 = min_element(vi.begin(), vi.end());
    int dmin = distance(vi.begin(), it0);
    cout << "the shortest string is " << vs[dmin] << endl;

    // max-min for strings
    vector<string>::iterator it;
        
    it = min_element(vs.begin(), vs.end());
    cout << "the prim string is " << *it << endl;
   
    it = max_element(vs.begin(), vs.end());
    cout << "the latest string is " << *it << endl;

}
