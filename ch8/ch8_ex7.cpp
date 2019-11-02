#include <iostream>
#include <vector>
#include <algorithm> // for sort function

using namespace std;

void print(const vector<string>&, const vector<double>&);

void print(const vector<string>& v, const vector<double>& a) {
    cout << endl;
    for (size_t i = 0; i < v.size(); ++i)
        cout << v[i] << '\t' << a[i] << endl;
};

int main() {
    vector<string> name = {
        "Alex",
        "Igor",
        "Oleg",
        "Bob",
        "Nikola" };

    vector<double> age;
    double a; // age
    
    for (auto it: name) {
        cout << "Please, enter "<< it << "'s age: ";
        cin >> a;
        age.push_back(a);
    }

    print(name, age);

    // copy name vector to tmp vector
    vector<string> tmpName(name);
    
    sort(name.begin(), name.end());

    vector<double> tmpAge;
    for(auto it: name)
         for(size_t j = 0; j < tmpName.size(); ++j)
            if (tmpName[j] == it) tmpAge.push_back(age[j]);

    age = tmpAge;
    
    print(name, age);
}
