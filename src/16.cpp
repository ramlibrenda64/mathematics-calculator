#include <iostream>
using namespace std;

int main() {
    int number1, number2;
    cout << "Enter two numbers: ";
    cin >> number1 >> number2;

    if (number1 > number2) {
        swap(number1, number2);
    }

    cout << number1 << " + " << number2 << " = " << (number1 + number2) << endl;
    return 0;
}
