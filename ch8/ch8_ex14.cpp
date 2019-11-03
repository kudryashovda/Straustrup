#include <iostream>
#include <vector>
#include <algorithm> // for min, max

using namespace std;

void foo(const vector<string>& vs, vector<int>& vi) {
    for(auto it: vs)
        vi.push_back(it.size());
}

template <typename T>
auto posOfMin(T& vs) {
    return min_element(vs.begin(), vs.end());
}

template <typename T>
auto posOfMax(T& vs) {
    return max_element(vs.begin(), vs.end());
}

int main() {

    vector<string> vs = {
        "milk",
        "orange juice",
        "water",
        "fanta",
        "tea"
    };

    for(auto it: vs) cout << it << endl;
    cout << endl;

    vector<int> vi; // keep size of each string in vs vector

    foo(vs, vi);

    int d;
    d = distance(vi.begin(), posOfMax(vi));
    cout << "the longest string is " << vs[d] << endl;

    d = distance(vi.begin(), posOfMin(vi));
    cout << "the shortest string is " << vs[d] << endl;

    // max-min for strings
    cout << "the primary alfabetic string is " << *posOfMin(vs) << endl;
    cout << "the latest alfabetic string is " << *posOfMax(vs) << endl;
}
