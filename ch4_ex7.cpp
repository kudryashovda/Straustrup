#include <iostream>
#include <string>
#include <vector>

using namespace std;

int str2num(string s);

int main() {
    cout << "It is a calculator for integer numbers from 0 to 9\n";
    cout << "You can enter as words as numbers like: two 5 *\n" << endl;
    string a, b;
    int x, y;
    char c;
    while(cin >> a >> b >> c) {
        x = str2num(a);
        y = str2num(b);
        if (x == -1 or y == -1) {cout << "Unknown word, please try again" << endl; continue;}

        switch (c) {
            case '+': cout << "Summ between " << a << " and " << b << " is " << x+y << endl; break;
            case '-': cout << "Diff between " << a << " and " << b << " is " << x-y << endl; break;
            case '*': cout << "Mult between " << a << " and " << b << " is " << x*y << endl; break;
            case '/': cout << "Div between " << a << " and " << b << " is " << x/y << endl; break;
            default: cout << "wrong operand: " << c << endl; break;
        }
    }
}

int str2num(string s) {

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

    int num = -1;
    for (int i = 0; i < s_numbers.size(); ++i)
        if (s == s_numbers[i] or s == n_numbers[i]) num = i;
        
    return num;
}
