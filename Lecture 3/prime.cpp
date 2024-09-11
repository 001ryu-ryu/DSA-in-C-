#include <iostream>
using namespace std;
int main() {
    int n;
    bool isPrime = true;
    cout << "Enter any positive number you want to check if it is prime or not: ";
    cin >> n;
    if (n == 2) {
        cout << n << " is prime!" << endl;
    }

    for (int i = 2; i*i < n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime == true) {
        cout << n << " is prime" << endl;
    } else {
        cout << n << " is not prime" << endl;
    }

    return 0;
}