// Write a program to check whether a character is uppercase, lowercase, digit, or special character.

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (isupper(ch)) {
        cout << ch << " is an uppercase letter.";
    } else if (islower(ch)) {
        cout << ch << " is a lowercase letter.";
    } else if (isdigit(ch)) {
        cout << ch << " is a digit.";
    } else {
        cout << ch << " is a special character.";
    }

    return 0;
}
