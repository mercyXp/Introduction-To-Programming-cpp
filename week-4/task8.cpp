#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    long factorial = 1.0; // Using long to handle large values

    for (int i = 1; i <= n; i++) {
        factorial *= i; // Calculating the factorial
    }

    cout << factorial;

    return 0;
}