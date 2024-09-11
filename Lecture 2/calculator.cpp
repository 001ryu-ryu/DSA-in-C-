#include <iostream>
using namespace std;

int main() {
    int a, b; char op;
    cout<< "Enter a: ";
    cin >> a;
    cout << "Enter operator: ";
    cin >> op;
    cout<< "Enter b: ";
    cin >> b;

    if (op == '+') {
        cout << a + b << endl;
    }
    else if (op == '-') {
        cout << a - b << endl;
    }
    else if (op == '*') {
        cout << a * b << endl;
    }
    else if (op == '/') {
        cout << (float)(a / b) << endl;
    }
    else if (op == '%') {
        cout << a % b << endl;
    } else {
        cout << "Invalid operator";
    }
    return 0;
}