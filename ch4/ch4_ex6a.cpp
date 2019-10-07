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

    cout << "Enter number from 0 to 9" << endl;

    int num;
    while(cin >> num) {
        cout << num << " is " << numbers[num] << endl;
    }
}
