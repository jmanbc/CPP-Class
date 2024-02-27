#include <iostream>

int main() {

  int value{45};

  std::cout << "The Value is : " << value << std::endl;

  std::cout << std::endl;
  value += 5; // equivalent to value = value + 5

  std::cout << "The value is (after +=5) : " << value << std::endl; // 50

  std::cout << std::endl;
  value -= 5; // equivalent to value = value - 5
  std::cout << "The value is (after -=5) : " << value << std::endl; // 45

  return 0;
}
