// g++ -Wall -Wextra -Wpedantic -std=c++11 -o pointersToArray_example pointersToArray_example.cpp

#include <iostream>

int main()
{
    int array[5] = { 9, 7, 5, 3, 1 };
    
    std::cout << sizeof(array) << '\n'; // will print sizeof(int) * array length
    
    int *ptr = array;
    std::cout << sizeof(ptr) << '\n'; // will print the size of a pointer
    
    std::cout << sizeof(&array) << '\n'; // will also print the size of the pointer to the first element

    return 0;
}
