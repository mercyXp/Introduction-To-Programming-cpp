#include <iostream>
using namespace std;

int main() {
    int number;

    // Input a 3-digit number
    cin >> number;

    // Check if the number is a 3-digit number
    if (number < 100 || number > 999) {
        cout << "Error: the number must be a 3-digit number." << endl;
        return 1; // End the program with an error
    }

    // Extract each digit of the number
    int firstDigit = number / 100;           // First digit
    int secondDigit = (number / 10) % 10;    // Second digit
    int thirdDigit = number % 10;            // Third digit

    // Check if all digits are different
    if (firstDigit != secondDigit && firstDigit != thirdDigit && secondDigit != thirdDigit) {
        cout << 1; // All digits are different
    } else {
        cout << 0; // Digits are not different
    }

    return 0;
}