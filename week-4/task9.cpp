#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    long long factorial_n = 1; 
    long long factorial_k = 1; 
    long long factorialnk = 1; 

    // calculating factorial of n, k и (n - k)
    for (int i = 1; i <= n; i++) {
        factorial_n *= i; // n!
    }
    for (int i = 1; i <= k; i++) {
        factorial_k *= i; // k!
    }
    for (int i = 1; i <= (n - k); i++) {
        factorialnk *= i; // (n - k)!
    }

    // C(n, k)
    long long combinations = factorial_n / (factorial_k * factorialnk);

    cout << combinations;

    return 0;
}
