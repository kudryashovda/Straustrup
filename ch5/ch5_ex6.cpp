#include<iostream>

using namespace std;

double ctof(double c) {
    return 9.0/5*c+32;
}

double ftoc(double f) {
    return (f-32)*5/9;
}


int main() {
    double deg;
    char sym;

    cout << "Please enter degree in celsium (c) or farenheit (f)" << endl;
    while (cin >> deg >> sym) {
        switch(sym) {
            case 'c': cout << "temperature in farenheit is " << ctof(deg) << endl; break;
            case 'f': cout << "temperature in celsium is " << ftoc(deg) << endl; break;
            default : cout << "Please enter 'c' or 'f' after degree" << endl; break;
        }
    }
}
