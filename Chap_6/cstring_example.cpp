// g++ -Wall -Wextra -Wpedantic -std=c++11 -o cstring_example cstring_example.cpp

#include <iostream>
#include <cstring>

int main()
{
    char name1[20] = "Alex1"; // only use 5 characters (4 letters + null terminator)
    std::cout << "My name is: " << name1 << '\n';
    std::cout << name1 << " has " << strlen(name1) << " letters.\n";
    std::cout << name1 << " has " << sizeof(name1) / sizeof(name1[0]) << " characters in the array.\n";
    
    std::cout << "\n";
    
    char name2[] = "Alex2"; // let the compiler decide the length
    std::cout << "My name is: " << name2 << '\n';
    std::cout << name2 << " has " << strlen(name2) << " letters.\n";
    std::cout << name2 << " has " << sizeof(name2) / sizeof(name2[0]) << " characters in the array.\n";

    return 0;
}
