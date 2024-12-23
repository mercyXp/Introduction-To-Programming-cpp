#include <iostream>

using namespace std;

int main() {
    int ticketNumber;
    
    cin >> ticketNumber; // Input a 6-digit ticket number

    // Check if the ticket number is a 6-digit number
    if (ticketNumber < 0 || ticketNumber > 999999) {
        cout << "Error: the ticket number must be a 6-digit number." << endl;
        return 1; 
    }

    // Calculate the sums of the first and last three digits
    int sumFirstHalf = 0;
    int sumSecondHalf = 0;

    // Extract and sum the first three digits
    sumFirstHalf += ticketNumber / 100000;          // First digit
    sumFirstHalf += (ticketNumber / 10000) % 10;    // Second digit
    sumFirstHalf += (ticketNumber / 1000) % 10;     // Third digit

    // Extract and sum the last three digits
    sumSecondHalf += (ticketNumber / 100) % 10;      // Fourth digit
    sumSecondHalf += (ticketNumber / 10) % 10;       // Fifth digit
    sumSecondHalf += ticketNumber % 10;               // Sixth digit

    // Check if the ticket is lucky
    if (sumFirstHalf == sumSecondHalf) {
        cout << 1; // The ticket is lucky
    } else {
        cout << 0; // The ticket is not lucky
    }

    return 0;
}