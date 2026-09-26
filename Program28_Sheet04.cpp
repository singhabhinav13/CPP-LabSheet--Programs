// Write a program to display all prime numbers between two given numbers.

#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    for (int num = start; num <= end; num++) {
        bool isPrime = true;

        if (num <= 1) {
            isPrime = false;
        } else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime) {
            cout << num << " ";
        }
    }

    return 0;
}
