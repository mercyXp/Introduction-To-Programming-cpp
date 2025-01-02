#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Loop to divide n by 2 until it is no longer divisible
    while (n % 2 == 0) {
        n /= 2; // Divide n by 2
    }

    // If n is reduced to 1, it is a power of two
    if (n == 1) {
        cout << "Yes"; // n is a power of two
    } else {
        cout << "No"; // n is not a power of two
    }

    return 0;
}