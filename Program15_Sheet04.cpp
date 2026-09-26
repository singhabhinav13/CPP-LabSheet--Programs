// Write a program to check whether three sides can form a valid triangle.

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter first side: ";
    cin >> a;
    cout << "Enter second side: ";
    cin >> b;
    cout << "Enter third side: ";
    cin >> c;

    if (a + b > c && b + c > a && a + c > b) {
        cout << "The sides form a valid triangle.";
    } else {
        cout << "The sides do not form a valid triangle.";
    }

    return 0;
}
