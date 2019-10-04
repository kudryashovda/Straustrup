#include<iostream>

using namespace std;

double ctok(double c) {
    if (c < -273.15) {cout << "The temperature is not exists"; exit(1);}
    double k = c + 273.15;
    return k;
}

int main() {
    double c = 0;
    cin >> c;
    double k = ctok(c);
    cout << k << endl ;
}
