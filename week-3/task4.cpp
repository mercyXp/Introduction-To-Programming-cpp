#include <iostream>

using namespace std;

int main() {
    int x0, y0, r, xA, yA;
    cin >> x0 >> y0 >> r >> xA >> yA;

    if ((xA - x0) * (xA - x0) + (yA - y0) * (yA - y0) == r * r) {
        cout << 1; 
    } else {
        cout << 0;
    }

    return 0;
}
//TESTS
//5 2 5 8 6
//-1000 -1000 1000 0 0