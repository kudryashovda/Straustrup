#include <iostream>
#include <vector>

using namespace std;

vector<int> initData;
vector<int> primes;

int main() {
    cout << "Programm for prime numbres seaching based on Eratosphene algorithm\n";

    const int max = 100;
    int initElements = max - 2;
    
    for (int i = 2; i < max; ++i) initData.push_back(i);

    int primeLast = 2;
    
    primes.push_back(primeLast);

    while(primeLast*primeLast < initElements) {
        primeLast = primes[primes.size()-1];

        for (int i = primeLast*primeLast-2; i < initElements; ++i)
            if (initData[i] % primeLast == 0) initData[i] = 0;

        for (int i = 0; i < initElements; ++i)
            if ( initData[i] > primeLast ) {
                primes.push_back(initData[i]); break; }
    }
    
    for (int i = 0; i < initElements; ++i)
        if ( initData[i] > primes[primes.size()-1] )
            primes.push_back(initData[i]);

    for (int i = 0; i < primes.size(); ++i)
        cout << primes[i] << ' ' ;

    cout << endl;    
}
