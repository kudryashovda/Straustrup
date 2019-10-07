#include<iostream>
#include<math.h>

using namespace std;

class Bad_res { };

void res_sq_eq(double a, double b, double c) {
    double d, x1, x2;
        
    d = b*b - 4*a*c;
    if (d < 0) throw Bad_res();

    x1 = (-b + sqrtf(d))/(2*a);
    x2 = (-b - sqrtf(d))/(2*a);

    cout << "x1=" << x1 << " x2=" << x2 << endl;
}

int main() {
    double a, b, c;

    cout << "Please enter a, b, c coefficients in square equation ax2 + bx + c = 0" << endl;
    cin >> a >> b >> c;

    try {
        res_sq_eq(a,b,c);
    }
    catch (Bad_res) {
        cout << "The equation has no solution" << endl;
    }
    
}
