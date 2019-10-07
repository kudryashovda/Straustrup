#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<double> vnum;
    string str;

    cout << "Please enter double to add it to array. To finish press |" << endl;
    while (cin >> str and str != "|")
        vnum.push_back( stod(str) );
        
    cout << "Please, enter number of first elements which you want to summ: ";
    int count;
    cin >> count;

    cout << "Summ of first " << count << " numbers: ";
    double summ = 0.0; 
    for (int i = 0; i < count; ++i) {
        if (i > 0 and i < count-1) cout << ", ";
            else cout << " and ";
        cout << vnum[i];

        summ += vnum[i]; 
    }
    cout << " is " << summ << endl;
}
