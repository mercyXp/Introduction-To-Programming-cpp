#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a < 1 || b < 1) {
        return 1; // Invalid input
    }

    int maxNum = a; // Initialize maxNum to a
    if (b > maxNum) {
        maxNum = b; // Update maxNum if b is greater
    }

    int lcm = maxNum;

    while (true) {
        if (lcm % a == 0 && lcm % b == 0) {
            break; // Found the LCM
        }
        lcm++; // Increment to check the next number
    }

    cout << lcm << endl;

    return 0;
}