#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int original = n; //original number
    int reversed = 0; // Variable to hold the reversed number

    // Reversing the digits of the number
    while (n > 0) {
        reversed = (reversed * 10) + (n % 10); // Appending the last digit
        n /= 10; // Removing the last digit
    }

    // Checking if the original number is equal to the reversed number
    if (original == reversed) {
        cout << "Yes"; // n is a palindrome
    } else {
        cout << "No"; // n is not a palindrome
    }

    return 0;
}