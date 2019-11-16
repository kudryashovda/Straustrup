#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Names_pairs {
public:
    void read_names();
    void read_ages();
    void sortNames();
    vector<string> name;
    vector<double> age;
private:
};

ostream& operator<<(ostream& os, const Names_pairs& np);
bool operator==(const Names_pairs& l, const Names_pairs& r);
bool operator!=(const Names_pairs& l, const Names_pairs& r);

int main() {
    Names_pairs np;
    np.read_names();
    np.read_ages();
    np.sortNames();

    Names_pairs np2;
    np2.read_names();
    np2.read_ages();
    np2.sortNames();

    if (np == np2) cout << "equal";
    if (np != np2) cout << "false";
}

bool operator==(const Names_pairs& l, const Names_pairs& r) {
    bool res1 = l.name == r.name;
    bool res2 = l.age == r.age;
    return res1 and res2;
}

bool operator!=(const Names_pairs& l, const Names_pairs& r) {
    return !(l == r);
}

void Names_pairs::read_names() {
    cout << "\nPlease, enter several names:\n";
    cout << "When finish, type \"exit\":\n";

    string c;
    while ((cin >> c) and (c != "exit")) name.push_back(c);
}


void Names_pairs::read_ages() {
    cout << "\nPlease, enter age\n";
    double a;
    for (auto it: name) {
        cout << it << " has "; cin >> a; age.push_back(a);
    }
}

ostream& operator<<(ostream& os, const Names_pairs& np) {
    os << endl;
    for(size_t i = 0, s = np.name.size(); i < s; ++i)
        os << np.name[i] << " has " << np.age[i] << " years\n";

    return os;
}

void Names_pairs::sortNames() {
    vector<string> tmpNames(name); // save initial vector
    vector<double> tmpAge;

    sort(name.begin(), name.end());

    size_t s = tmpNames.size();
    for(auto it: name)
        for(size_t i = 0; i < s; ++i)
            if (it == tmpNames[i]) tmpAge.push_back(age[i]);

    age = tmpAge;
}
