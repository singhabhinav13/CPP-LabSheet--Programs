// Write a program to print the sum of even numbers between 1 and N.

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    cout << "Sum of even numbers between 1 and " << n << ": " << sum;

    return 0;
}
