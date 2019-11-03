#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct s {
    int min;
    int max;
    int average;
    double med;
};

s foo(const vector<int>&);

s foo(const vector<int>& v) {
    s st;
    st.min = v.front();
    st.max = v.front();
    int summ = 0; 
    for(auto it: v) {
        if (it > st.max) st.max = it;
        if (it < st.min) st.min = it;
        summ += it;
    }

    st.average = summ / v.size();
    
    // mediana calc
    vector<int> m(v);
    sort(m.begin(), m.end());

    int middle = m.size() / 2;
    if ((m.size() % 2) != 0) st.med = m[middle];
        else st.med = double(m[middle-1] + m[middle]) / 2;
    
    return st;
};

int main() {

    vector<int> v = {1,2,3,4,5};

    s miS = foo(v);

    cout << "max=" << miS.max << endl;
    cout << "min=" << miS.min << endl;
    cout << "average=" << miS.average << endl;
    cout << "mediana=" << miS.med << endl;

}
