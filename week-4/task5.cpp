#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0; // Count of prime numbers found
    int num = 2;   // Starting number to check for primality

    while (count < n) {
        bool isPrime = true;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << num << " ";
            count++;
        }
        num++;
    }
    return 0;
}