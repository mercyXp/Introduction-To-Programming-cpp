#include <iostream>
using namespace std;
 
 //Iterative function to find Fibonacci Numbers 
int fibo_iter(int n) {
    if (n == 1) return 0; // F(0) = 0
    if (n == 2) return 1; // F(1) = 1

    int previous = 0; // F(0)
    int current = 1;  // F(1)
    int next;         // Variable to hold the next Fibonacci number

    for (int i = 3; i <= n; ++i) {
        next = previous + current; // Calculate the next Fibonacci number
        previous = current;        // Update previous to current
        current = next;           // Update current to next
    }
    return next; 
}

int main() {
    int n;
    cin >> n;

    cout << fibo_iter(n);
    return 0;
}