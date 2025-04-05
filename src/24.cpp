#include <iostream>

using namespace std;

void main() {
    int num1, num2, operatorSign;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> operatorSign;
    cout << "Enter an operation (+, -, *, /): ";
    cin >> num2;
    
    if (operatorSign == '+') {
        cout << num1 + num2 << endl;
    } else if (operatorSign == '-') {
        cout << num1 - num2 << endl;
    } else if (operatorSign == '*') {
        cout << num1 * num2 << endl;
    } else if (operatorSign == '/') {
        if (num2 != 0) {
            cout << num1 / num2 << endl;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    }
}
