/*
A divisor in mathematics is a number that divides another number evenly, meaning that when the first number (the dividend) is divided by the divisor, the remainder is zero. For example, in the equation 12 ÷ 3 = 4, 3 is a divisor of 12.
*/

#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    // Started checking from n/2 down to 1
    for (int i = n / 2; i >= 1; --i) {
        if (n % i == 0) {
            cout<<i;
        }
        return 0;
    }
    return 0;
}