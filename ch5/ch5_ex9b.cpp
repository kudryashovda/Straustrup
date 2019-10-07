#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<double> vnum;
    vector<double> vdif;
    string str;

    cout << "Please enter double to add it to array. To finish press |" << endl;
    int k = 0;
    while (cin >> str and str != "|") {
        vnum.push_back( stod(str) );
        if (k > 0) vdif.push_back(vnum[k] - vnum[k-1]);
        ++k;
    }
        
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
    cout << " is " << summ << endl << endl;

    cout << "Diff vector: ";
    for (int i = 0; i < vdif.size(); ++i) cout << vdif[i] << " ";
    cout << endl;
}
