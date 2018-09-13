/*
 
 It uses the "{}" uniform initialization. Compile using -std=c++11 flag in g++ as:
 
 g++ -Wall -Wextra -Wpedantic -std=c++11 -o checkUniformInitialization checkUniformInitialization.cpp

*/

#include <iostream>

int main()
{
    
    int x{7};
    std::cout << "x = " << x << std::endl;
    
    return 0;
}
