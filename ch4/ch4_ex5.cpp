#include <iostream>

using namespace std;

int main() {
    double a, b;
    char c;
    while(cin >> a >> b >> c) {
        switch (c) {
            case '+': cout << "Сумма " << a << " и " << b << " равна " << a+b << endl; break;
            case '-': cout << "Разность " << a << " и " << b << " равна " << a-b << endl; break;
            case '*': cout << "Произведение " << a << " и " << b << " равно " << a*b << endl; break;
            case '/': cout << "Частное " << a << " и " << b << " равно " << a/b << endl; break;
            default: cout << "wrong operand" << endl; break;
        }
    }
}
