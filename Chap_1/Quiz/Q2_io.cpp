#include <iostream>

int readNumber(){

    int n;
    
    std::cout << "Input a number: " << std::endl;
    std::cin >> n;
    
    return n;
    
}


void writeAnswer(int n){

    std::cout << "The sum is: " << n << std::endl;
}