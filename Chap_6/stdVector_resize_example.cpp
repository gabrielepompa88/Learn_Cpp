// g++ -Wall -Wextra -Wpedantic -std=c++11 -o stdVector_resize_example stdVector_resize_example.cpp

#include <vector>
#include <iostream>

int main()
{
    std::vector<int> array { 0, 1, 2, 3, 4 };
    array.resize(3); // set length to 3
    
    std::cout << "The length is: " << array.size() << '\n';
    
    for (const auto &element: array)
        std::cout << element << ' ';
    std::cout << std::endl;
    
    return 0;
}