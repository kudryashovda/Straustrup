#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> vnum;
    string str;

    cout << "Please enter integer to add it to array. To finish press |" << endl;
    while (cin >> str and str != "|")
        vnum.push_back( stoi(str) );
        
    cout << "Please, enter number of first elements which you want to summ: ";
    int count;
    cin >> count;

    cout << "Summ of first " << count << " numbers: ";
    int summ = 0; 
    for (int i = 0; i < count; ++i) {
        if (i > 0 and i < count-1) cout << ", ";
            else cout << " and ";
        cout << vnum[i];

        summ += vnum[i]; 
    }
    cout << " is " << summ << endl;
}
