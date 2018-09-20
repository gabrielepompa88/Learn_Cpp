// g++ -Wall -Wextra -Wpedantic -std=c++11 -o cStyleStrings_example cStyleStrings_example.cpp

#include <iostream>

int main()
{
    char name[20] = "Alex"; // only use 5 characters (4 letters + null terminator)
    std::cout << "My name is: " << name << '\n';
    
    return 0;
}
