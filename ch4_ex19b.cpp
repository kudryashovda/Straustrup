#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<string> names;
    vector<int> scores;
    
    string name;
    int score;

    while(cin >> name >> score) {
        if (name == "NoName" and score == 0) break;
        names.push_back(name);
        scores.push_back(score);
    }

    for (int i = 0; i < names.size(); ++i) {
        int counts = 0;
        for (int k = 0; k < names.size(); ++k)
            if (names[i] == names[k] and i > k) 
                cout << "Name: " << names[i] << " has been entered earlier\n";
    }
    
    cout << endl;
    
    for (int i = 0; i < names.size(); ++i)
        cout << names[i] << '\t' << scores[i] << endl;
}
