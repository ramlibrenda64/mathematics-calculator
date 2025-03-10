// A simple calculator that can perform basic arithmetic operations
class Calculator {
public:
    int add(int x, int y) {
        return x + y;
    }

    int subtract(int x, int y) {
        return x - y;
    }

    int multiply(int x, int y) {
        return x * y;
    }

    int divide(int x, int y) {
        if (y == 0) {
            throw "Division by zero is not allowed";
        }
        return x / y;
    }
}
