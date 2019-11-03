#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void foo(const vector<int>&, int&, int&, int&, double&);

void foo(const vector<int>& v, int& min, int& max, int& average, double& med) {
    min = v.front();
    max = v.front();
    int summ = 0; 
    for(auto it: v) {
        if (it > max) max = it;
        if (it < min) min = it;
        summ += it;
    }

    average = summ / v.size();
    
    // mediana calc
    vector<int> m(v);
    sort(m.begin(), m.end());

    int middle = m.size() / 2;
    if ((m.size() % 2) != 0) med = m[middle];
        else med = double(m[middle-1] + m[middle]) / 2;
};

int main() {

    vector<int> v = {1,2,3,4,5,6};

    int min, max, average;
    double med;
    
    foo(v, min, max, average, med);

    cout << "max=" << max << endl;
    cout << "min=" << min << endl;
    cout << "average=" << average << endl;
    cout << "mediana=" << med << endl;

}
