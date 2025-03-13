// Mathematics Calculator Program
#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int num1, num2;
    char operation;
    float result;

    // Ask user for input
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Ask user for operation
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    // Perform operation
    if (operation == '+') {
        result = num1 + num2;
    } else if (operation == '-') {
        result = num1 - num2;
    } else if (operation == '*') {
        result = num1 * num2;
    } else if (operation == '/') {
        result = num1 / num2;
    } else {
        cout << "Invalid operation. Try again." << endl;
        return 0;
    }

    // Display the result
    cout << "Result: " << result << endl;

    return 0;
}
