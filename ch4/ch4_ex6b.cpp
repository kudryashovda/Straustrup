#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<string> n_numbers = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    vector<string> s_numbers = {
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine" };

    cout << "Please enter or write number from zero to nine" << endl;

    string s;
    while(cin >> s) {
    int num = -1;
        for (int i = 0; i < s_numbers.size(); ++i)
            if (s == s_numbers[i] or s == n_numbers[i]) num = i;
            
    if (num != -1) cout << "It is number: " << num << endl;
        else cout << "Unknown word, please try again" << endl;
    }
}
