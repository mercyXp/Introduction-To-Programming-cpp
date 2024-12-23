#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    // Variable to store the binary representation
    int binary = 0;
    int base = 1;

    // Convert decimal to binary
    while (a > 0) {
        int lastBit = a % 2; 
        binary += lastBit * base; 
        a = a / 2; 
        base *= 10; 
    }

    cout << binary;

    return 0;
}

//SOLUTION 2
/*
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a decimal number (a < 17): ";
    cin >> a;

    // Check if the input is valid
    if (a < 0 || a >= 17) {
        cout << "Please enter a valid number less than 17." << endl;
        return 1;
    }

    // Handle the case when a is 0
    if (a == 0) {
        cout << "Binary representation is: 0" << endl;
        return 0;
    }

    // Variable to store the binary representation
    int binary = 0;
    int place = 1;

    // Convert decimal to binary
    while (a > 0) {
        int lastBit = a % 2; // Get the last bit
        binary += lastBit * place; // Add it to the binary number
        a = a / 2; // Divide by 2
        place *= 10; // Move to the next place value
    }

    cout << binary << endl; // Output the binary representation

    return 0;
}
*/

//SOLUTION 3
/*#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a decimal number (a < 17): ";
    cin >> a;

    // Check if the input is valid
    if (a < 0 || a >= 17) {
        cout << "Please enter a valid number less than 17." << endl;
        return 1;
    }

    // Array to store binary number
    int binaryNum[32];
    int i = 0;

    // Convert decimal to binary
    while (a > 0) {
        binaryNum[i] = a % 2; // Store remainder
        a = a / 2;            // Divide by 2
        i++;
    }

    // Printing binary array in reverse order
    cout << "Binary representation is: ";
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
    cout << endl;

    return 0;
}*/