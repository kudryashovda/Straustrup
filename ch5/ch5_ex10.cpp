// Fibonachi numbers upto int size

#include<iostream>

using namespace std;

int main() {
    int prev = 1;
    int current = 1;
    int next;

    cout << prev << ' '; 
    while (current > 0) {
        cout << current << ' ';
        next = current + prev;
        prev = current;
        current = next;
    }
}
