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

    cout << "Please, enter score:\n";
    while (cin >> score) {
        bool isScore = false;
        for (int i = 0; i < scores.size(); ++i)
            if (score == scores[i]) {
                isScore = true;
                cout << names[i] << " has " << score << " scores\n";
            }
        if (isScore == false) cout << "score not found\n";
    }

}
