#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    if (num1 > num2) {
        swap(num1, num2);
    }
    
    cout << "You entered: " << num1 << " and " << num2 << endl;

    return 0;
}
