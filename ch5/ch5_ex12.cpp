#include <iostream>
#include <vector>

using namespace std;

vector<int> pc = {0,0,0,0};
vector<int> user = {0,0,0,0};

bool exists(int r, int i) {
    for (int k = 0; k < i; ++k) if (r == pc[k]) return true;
    return false;
}

int main() {
    cout << "Welcome to a game 'Cows and Bulls'\n\n";

    while (true) {
        cout << "Please, enter digit from 1 to 10: ";

        int s;
        cin >> s;
        
        srand(s);

        pc[0] = rand() % 9;

        for (int i = 1; i < pc.size(); ++i)
            do { pc[i] = rand() % 9; } while (exists(pc[i], i));
        
        cout << "Try to guess number - Enter 4 digit number: ";
        while (true) {
            char c;
            for (int i = 0; i < user.size(); ++i) {
                cin >> c;
                user[i] = c - 48;
            }

            
            int bulls = 0;
            int cows = 0;
            for (int i = 0; i < user.size(); ++i) {
                if (user[i] == pc[i]) ++bulls;
                for (int k = 0; k < pc.size(); ++k)
                    if (user[i] == pc[k] and user[k] != pc[k]) ++cows;
            }

            cout << bulls << " bulls and "<< cows << " cows\n";

            if (bulls == 4) break;
        }

        cout << "\nCongratulations!!!\n" << endl;
    }
}
