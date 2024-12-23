#include <iostream>

using namespace std;

int main(){
    int number; 
    std::cin>>number; //enter a 4-digit number

     // Check if the number consists of 4 digits
    if (number < 1000 || number > 9999) {
        cout << "Error: the number must be 4 digits." << endl;
        return 1;
    }

    // Check if the number is a palindrome
    int firstDigit = number / 1000;            // First digit
    int secondDigit = (number / 100) % 10;     // Second digit
    int thirdDigit = (number / 10) % 10;       // Third digit
    int fourthDigit = number % 10;              // Fourth digit

    if (firstDigit == fourthDigit && secondDigit == thirdDigit) {
        cout << 1; // The number is a palindrome
    } else {
        cout << 0; // The number is not a palindrome
    }
    return 0;
}