// Write a program to check whether a given number is divisible by 5 and 11.

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 5 == 0 && num % 11 == 0) {
        cout << num << " is divisible by both 5 and 11.";
    } else {
        cout << num << " is not divisible by both 5 and 11.";
    }

    return 0;
}
