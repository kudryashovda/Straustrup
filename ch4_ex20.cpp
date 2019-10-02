#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<string> names;
    vector<int> scores;
    
    string name;
    int score;

    cout << "Please, enter name and score\n";
    while(cin >> name >> score) {
        if (name == "NoName" and score == 0) break;
        names.push_back(name);
        scores.push_back(score);
    }

    cout << "Please, enter name:\n";
    while (cin >> name) {
        bool isName = false;
        for (int i = 0; i < names.size(); ++i)
            if (name == names[i]) {
                isName = true;
                cout << names[i] << " has " << scores[i] << " scores\n";
            }
        if (isName == false) cout << "Name not found\n";
    }

}
