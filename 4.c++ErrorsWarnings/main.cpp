#include <iostream>

int main(){

    //Compile Time Error
    std::cout << "Hellow World!" << std::endl;

    //Run time error
    int value = 7/0;
    std::cout << "value : " << value << std::endl;
     return 0;
}