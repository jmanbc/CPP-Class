#include <iostream>

int main() {

  bool red_light {false};
  bool green_light {true};

  if (red_light == true) {
    std::cout << "Stop!" << std::endl;
  }else{
    std::cout << "Go through!" << std::endl;
  }

  if (green_light) {
    std::cout << "The light is green!" << std::endl;
  }else{
    std::cout << "The light is not green!" << std::endl;
  }

  //sizeof()

  std::cout << "sizeof(bool) : " << sizeof(bool) << std::endl;

  //Printing out a bool
  //1 --> true
  //0 --> false
  std::cout << std::endl;
  std::cout << "red_light : " << red_light << std::endl;
  std::cout << "green_light : " << green_light << std::endl;

  std::cout << std::boolalpha; //Print out true or false instead of 1 or 0
  std::cout << "red_light : " << red_light << std::endl;
  std::cout << "green_light : " << green_light << std::endl;

  return 0;
}
