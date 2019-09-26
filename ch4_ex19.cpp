// Joe and scores

#include <iostream>
#include <vector>

using namespace std;

void printArray(void);
bool isNameExists(string);

vector<string> names;
vector<int> scores; 

int main() {
    cout << "Please, enter pair name-score\n";

    string name;
    int score;

    while(cin >> name >> score) {
        if (name == "NoName" and score == 0) { printArray(); break; }
        
        if (isNameExists(name)) cout << "Error! The name exists\n";
            else { names.push_back(name); scores.push_back(score); }
    }
}

bool isNameExists(string str) {
    bool isExists = false;
    for (int i = 0; i < names.size(); ++i)
        if (str == names[i]) isExists = true;

    return isExists;
}

void printArray(void) {
    for (int i = 0; i < names.size(); ++i)
        cout << names[i] << '\t' << scores[i] << endl;
}
