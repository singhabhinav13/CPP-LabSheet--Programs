#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    if (a > b) {
        cout << a << " is the largest.";
    }
    if (b > a) {
        cout << b << " is the largest.";
    }
    if (a == b) {
        cout << "Both numbers are equal.";
    }

    return 0;
}
