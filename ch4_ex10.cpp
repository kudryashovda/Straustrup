#include <iostream>
#include <vector>

using namespace std;

void pcwin();
void userwin();

int main() {
    cout << "Game -=Rock Scissors Paper=- \n" ;

    cout << "Please enter 'r' as Rock, 's' as Scissors or 'p' as Paper\n\n";

    vector<char> material = {'r', 'r', 's', 'p', 'r', 's', 's', 'r', 'r', 's', 'p', 's', 's', 'r', 'p' };

    char user;
    char pc;
    int n = 0;
    while (cin >> user) {
        pc = material[n];

        cout << "User " << user << " vs PC " << pc << endl;

        if (pc == user) { cout << "Draw" << endl; continue; }
        
        switch(user) {
        case 'r': if (pc == 'p') pcwin(); else userwin(); ++n; ++n;
        break;
        case 's': if (pc == 'r') pcwin(); else userwin();
        break;
        case 'p': if (pc == 's') pcwin(); else userwin(); ++n;
        break;
        default: cout << "Please enter r, s or p" << endl;
        break;
        }
    ++n;
    if (n > material.size()) n = 0;
    }
}

void pcwin() {
    cout << "PC win" << endl;
};

void userwin() {
    cout << "User win" << endl;
}
