// g++ -Wall -Wextra -Wpedantic -std=c++11 -o Q5_c Q5_c.cpp

#include <iostream>
#include <array>

//void printArray(int array[])
void printArray(const std::array<int,5> &array)
{
    for (const int &element : array)
        std::cout << element << ' ';
}


int main()
{
    //int array[] { 9, 7, 5, 3, 1 };
    std::array<int,5> array = {{9, 7, 5, 3, 1}}; // using single curly brackets '{}' triggers the warning: warning: suggest braces around initialization of subobject [-Wmissing-braces]
    printArray(array);
    
    return 0;
}
