#include <iostream>

int main() {

  int value{5};

  // Increment by one
  value = value + 1;
  std::cout << "The Value is : " << value << std::endl;

  value = 5; // Reset the value to 5

  // Decrement by one
  value = value - 1;
  std::cout << "The Value is : " << value << std::endl;

  //================================================================================================

  std::cout << "=======Postfix Increment and Decrement========" << std::endl;
  // Reset the value to 5
  value = 5;

  std::cout << "The Value is (Incrementing) : " << value++ << std::endl;
  std::cout << "The Value is : " << value << std::endl;

  std::cout << std::endl;

  // Decrement with postfix

  // Reset value to 5
  value = 5;

  std::cout << "The Value is (Decrementing) : " << value-- << std::endl;
  std::cout << "The Value is : " << value << std::endl;

  //================================================================================================

  std::cout << "=======Prefix Increment and Decrement========" << std::endl;

  // Reset the value to 5
  value = 5;

  ++value;
  std::cout << "The Value is (prefix++) : " << value << std::endl;

  // Reset the value to 5
  value = 5;

  std::cout << "The Value is (prefix++ in place) : " << ++value << std::endl;

  std::cout << std::endl;

  // Prefix : Decrementing

  // Reset value to 5;
  value = 5;
  --value;
  std::cout << "The Value is (prefix--) : " << value << std::endl;

  // Reset value to 5;
  value = 5;
  std::cout << "The Value is (prefix-- in place) : " << --value << std::endl;

  return 0;
}
