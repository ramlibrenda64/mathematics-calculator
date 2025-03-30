#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    int sum = num1 + num2;
    int product = num1 * num2;
    cout << "Sum of the numbers is: " << sum << endl;
    cout << "Product of the numbers is: " << product << endl;
    return 0;
}
