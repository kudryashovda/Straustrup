#include <iostream>
#include <vector>

using namespace std;

vector<int> pc;
vector<int> user;

int main() {
    cout << "Welcome to a game 'Cows and Bulls'\n\n";

    pc = {2,8,7,3};
    user = {0,0,0,0};

    cout << "Try to guess number - Enter 4 digit number: ";
    int user_num;
    while (true) {
        cin >> user_num;

        for (int i = 0; i < user.size(); ++i) {
            user[user.size()-i-1] = (user_num % 10);
            user_num /= 10;
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

    cout << "\nCongratulations!!!" << endl;
}
