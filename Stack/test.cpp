#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;          // 0 and 1 are not prime
    if (n == 2 || n == 3) return true; // 2 and 3 are prime
    if (n % 2 == 0) return false;      // eliminate even numbers

    // Check only odd divisors up to sqrt(n)
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}
