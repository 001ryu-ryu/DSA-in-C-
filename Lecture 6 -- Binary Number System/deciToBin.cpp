#include <iostream>
using namespace std;

int decimalToBinary(int n) {
    int ans = 0;
    int pow = 1;
    while (n != 0) {
        int rem = n % 2;
        ans += rem * pow;
        pow = pow * 10;
        n = n / 2;

    }
    return ans;
}
int main() {
    cout << decimalToBinary(50) << endl;
    return 0;
}