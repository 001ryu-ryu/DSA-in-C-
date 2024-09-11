//  Print the sum of first n odd numbers

#include <iostream>
using namespace std;

int main() {
    int firstOdd = 1;
    int sum = 0;
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = firstOdd; i <= n; i++) {
        if (i % 2 == 1) {
            sum += i;
        }
    }
    cout << "sum = " << sum << endl;

   
    return 0;
}