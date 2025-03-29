#include <iostream>
using namespace std;

void main() {
    int x, y;
    
    cout << "Enter two numbers: ";
    cin >> x >> y;
    
    if (x > y) {
        cout << x << " is greater than " << y << endl;
    } else {
        cout << y << " is greater than " << x << endl;
    }
}
