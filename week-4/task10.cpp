#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;

    // Store digits in a string to easily access them in reverse order
    string digits = to_string(n);

    // Output digits in forward order
    cout << digits << endl;

    // Output digits in reverse order
    for (int i = digits.length() - 1; i >= 0; --i) {
        cout << digits[i];
    }
    cout << endl;

    return 0;
}