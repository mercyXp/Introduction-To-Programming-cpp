#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == 0) {
        if (b != 0) {
            cout << 1 << " " <<-((double)c / b);
        } else if (c != 0) {
            cout << 0;
        } else {
            cout << -1;
        }
    } else {
        int discriminant = pow(b, 2) - 4 * a * c;
        if (discriminant == 0) {
            cout << 1 << " " << -((double)b / (2 * a));
        } else if (discriminant < 0) {
            cout << 0;
        } else {
            double root1 = (-((double)b) - sqrt(discriminant)) / (2 * a);
            double root2 = (-((double)b) + sqrt(discriminant)) / (2 * a);

            if (root1 > root2)
            {
                swap(root1 , root2);
            }
            
            cout << 2 << " " << root1 << " " << root2;
        }
    }

    return 0;
}