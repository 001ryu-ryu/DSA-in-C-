#include <iostream>
using namespace std;
int main() {
    long n;
    cout << "Enter n: ";
    cin >> n;
    long factorial = 1;
    for (long i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << "factorial of " << n << " is " << factorial << endl;
    return 0;
}