#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n);

vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41,
                    43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
vector<int> myPrimes;

int main() {
    cout << "Programm for primes searching\n";
    
    for (int i = 1; i < 100; ++i) if (isPrime(i)) myPrimes.push_back(i);

    cout << "Data stored in primes vector:\n";
    for (int i = 0; i < primes.size(); ++i) cout << primes[i] << ' ';

    cout << "\n\nData stored in myPrimes vector:\n";
    for (int i = 0; i < myPrimes.size(); ++i) cout << myPrimes[i] << ' ';
    cout << endl;
}

bool isPrime(int n) {
    int counts = 0;
    for (int k = 0; k < primes.size(); ++k)
        if ((n <= primes[k]) and (n % primes[k] == 0)) ++counts;

    if (counts == 0) return false;
        else return true;
}
