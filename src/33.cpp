#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;
    if (x > 0 && y > 0) {
        if (y == 1) {
            cout << x * -2;
        } else {
            cout << x + y / 2;
        }
    } else if (x < 0 || y < 0) {
        cout << "Invalid input. Please enter positive integers.";
    } else {
        cout << "One of the numbers is zero.";
    }
    return 0;
}
