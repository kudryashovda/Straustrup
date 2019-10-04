#include<iostream>

using namespace std;

double ktoc(double k) {
    if (k < 0) {cout << "The temperature is not exists"; exit(1);}
    double c = k - 273.15;
    return c;
}


int main() {
    double k = 0;
    cin >> k;
    double c = ktoc(k);
    cout << c << endl ;
}
