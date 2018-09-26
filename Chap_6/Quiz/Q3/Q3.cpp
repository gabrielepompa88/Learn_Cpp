// g++ -Wall -Wextra -Wpedantic -std=c++11 -o Q3 Q3.cpp

#include <iostream>

void swapIntegers(int &num1, int &num2){

    int temp = num2;
    
    num2 = num1;
    num1 = temp;
    
}

int main()
{
    
    std::cout << "Input integer #1: ";
    int n1;
    std::cin >> n1;

    std::cout << "Input integer #2: ";
    int n2;
    std::cin >> n2;
    
    std::cout << "Integers in input: n1 = " << n1 << "; n2 = " << n2 << std::endl;
    
    swapIntegers(n1, n2); // input parameters need not to be references themselves. They are set as references in the body of swapIntegers.

    std::cout << "Integers in input: n1 = " << n1 << "; n2 = " << n2 << std::endl;
    
    return 0;
}