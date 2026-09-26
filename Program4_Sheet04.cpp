// Write a program to find the largest of three numbers using nested if.

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;

    if (a >= b) {
        if (a >= c) {
            cout << a << " is the largest.";
        } else {
            cout << c << " is the largest.";
        }
    } else {
        if (b >= c) {
            cout << b << " is the largest.";
        } else {
            cout << c << " is the largest.";
        }
    }

    return 0;
}
