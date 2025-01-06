#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input; 
    
    int result = 0; // Variable to store the converted integer
    
    // Convert the string to integer
    for (char c : input) {
        result = result * 10 + (c - '0');
    }
    
    cout << result << endl; // Output the result
    
    return 0;
}
