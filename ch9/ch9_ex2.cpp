#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Names_pairs {
public:
    void read_names();
    void read_ages();
    void print();
    void sortNames();
private:
    vector<string> name;
    vector<double> age;
};

int main() {
    Names_pairs np;

    np.read_names();

    np.read_ages();

    np.print();

    np.sortNames();

    np.print();
}


void Names_pairs::read_names() {
    cout << "\nPlease, enter several names:\n";
    cout << "When finish, type \"exit\":\n";

    string c;
    while ((cin >> c) and (c != "exit")) name.push_back(c);
}


void Names_pairs::read_ages() {
    cout << "\nPlease, enter age for:\n";
    double a;
    for (auto it: name) {
        cout << it << ": ";
        cin >> a;
        age.push_back(a);
    }
}

void Names_pairs::print() {
    cout << endl;
    for(size_t i = 0, s = name.size(); i < s; ++i)
        cout << name[i] << " has " << age[i] << " years\n";
}

void Names_pairs::sortNames() {
    vector<string> tmpNames(name);
    vector<double> tmpAge;

    sort(name.begin(), name.end());

    size_t s = tmpNames.size();
    for(auto it: name)
        for(size_t i = 0; i < s; ++i)
            if (it == tmpNames[i]) tmpAge.push_back(age[i]);

    age = tmpAge;
}
