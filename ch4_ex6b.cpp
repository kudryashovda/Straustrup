#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<string> numbers = {
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

    cout << "Write number from zero to nine" << endl;

    string s;
    while(cin >> s) {
        for (int i = 0; i < numbers.size(); ++i)
            if (s == numbers[i]) cout << s << " is " << i << endl;

    }
}
