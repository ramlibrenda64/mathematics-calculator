#include <iostream>

int main() {
  int num1, num2;

  std::cout << "Enter the first number: ";
  std::cin >> num1;

  std::cout << "Enter the second number: ";
  std::cin >> num2;

  int result = num1 + num2;

  std::cout << "The sum is: " << result << std::endl;

  return 0;
}
