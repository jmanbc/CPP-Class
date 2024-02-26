#include <iostream>

int addNumbers( int first_param, int second_param){
    int result = first_param + second_param;
    return result;
}

int multiplyNumbers( int first_param, int second_param){
    int result = first_param * second_param;
    return result;
}

double dividenumbers( double first_param, double second_param){
    double result = first_param / second_param;
    return result;
}

int main(){

    int first_number {13}; //Statement
    int second_number {7}; 

    std::cout << "First number : " << first_number << std::endl; // 13
    std::cout << "Second number : " << second_number << std::endl; // 7

    int sum = first_number + second_number;
    std::cout << "Sum : " << sum << std::endl; // 20

    sum = addNumbers(25,7);
    std::cout << "Sum : " << sum << std::endl; // 32

    sum = addNumbers(30,54);
    std::cout << "Sum : " << sum << std::endl; // 84

    int equals = multiplyNumbers(2,3);
    std::cout << "Product : " << equals << std::endl; // 6

    std::cout << "Sum : " << addNumbers(3,42) << std::endl; // 45

    std::cout << "Product : " <<multiplyNumbers(8,9) << std::endl; // 72

    double quotient = dividenumbers(8,4);
    std::cout << "Quotient : " << quotient << std::endl; // 2

    std::cout << "Quotient : " << dividenumbers(2,5) <<std::endl; // 0.4

    return 0;
    
}