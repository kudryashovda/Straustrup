#include<iostream>

using namespace std;

double ctok(double c) {
    double k = c + 273.15;
    return k;
}

int main() {
    double c = 0;
    cin >> c;
    if (c < -273.15) {cout << "The temperature is not exists"; return -1;}
    double k = ctok(c);
    cout << k << endl ;
}
