#include <iostream>

int main() {
  int num1 = 0;
  int num2 = 0;
  std::cout << "Enter two numbers: ";
  std::cin >> num1 >> num2;
  std::cout << "Sum: " << num1 + num2 << std::endl;
  std::cout << "Difference: " << num1 - num2 << std::endl;
  std::cout << "Product: " << num1 * num2 << std::endl;
  std::cout << "Quotient: " << num1 / num2 << std::endl;
  return 0;
}
