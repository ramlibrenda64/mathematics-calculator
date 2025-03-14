#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to my calculator!" << endl;

    // Get input from user
    string input;
    cin >> input;

    // Check if the input is a valid operation
    bool validOperation = false;
    for (char c : input) {
        if (!isdigit(c)) {
            validOperation = true;
            break;
        }
    }

    // Perform the requested operation
    if (validOperation) {
        cout << "Invalid operation. Please enter a number." << endl;
    } else {
        int result = stoi(input);
        cout << "The result is: " << result << endl;
    }

    return 0;
}
