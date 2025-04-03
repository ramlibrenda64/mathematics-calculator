#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int sum = num1 + num2;
    int product = num1 * num2;
    int quotient = num1 / num2;

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;

    return 0;
}
