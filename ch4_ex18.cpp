//Programm that solves ax2+bx+c=0

#include <iostream>
#include <cmath>       /* sqrt */

using namespace std;

int main() {
    cout << "Please enters a, b and c coefficients\n";
    double a, b, c, d, s, x1, x2;
    cin >> a >> b >> c;

    d = b*b - 4*a*c;

    if (d < 0) {cout << "it has no solution" << endl; return 0;}

    if (d == 0) { x1 = -b/(2*a); cout << "x=" << x1 << endl; }
        else {
            s = sqrt(d);
            x1 = (-b + s)/(2*a);
            x2 = (-b - s)/(2*a);
            cout << "x1=" << x1 << " x2=" << x2 << endl;
        }
}
