#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        swap(num1, num2);
    }

    cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
    return 0;
}
