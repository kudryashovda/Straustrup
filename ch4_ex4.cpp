#include <iostream>

using namespace std;

int main() {
    while(true) {
        cout << "Загадайте целое число от 1 до 100: " << endl;

        int max = 100;
        int min = 1;

        string answer;
        int g;
        
        for (int i = 0; i < 7; ++i) {
            g = 1 + (max + min) / 2 ; 
            cout << "Число меньше " << g << "? (y/n): "; cin >> answer;
            
            if (answer == "y") max = g - 1;            
                else min = g;
                    
            if (min == max) { cout << "answer is " << min << endl << endl; break;}
        }
    }
}
