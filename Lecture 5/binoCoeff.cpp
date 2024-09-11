#include <iostream>
using namespace std;
int factorial(int a) {
    int fact = 1;
    for (int i = 1; i <= a; i++) {
        fact *= i;
    }
    return fact;
}

int binoCoeff(int n, int r) {
    return (factorial(n)) / (factorial(r) * factorial(n - r));
}
int main() {
   cout << binoCoeff(6, 3) << endl;
    return 0;
}