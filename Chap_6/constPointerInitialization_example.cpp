// g++ -Wall -Wextra -Wpedantic -std=c++11 -o constPointerInitialization_example constPointerInitialization_example.cpp

#include <iostream>

int main()
{
    int x;
    int *const p0 = &x;
    std::cout << "type p0: " << typeid(p0).name() << " ; *p0 = " << *p0 << std::endl;    // undefined behavior (printed: 1757012062)
    
    int arr1[3];
    std::cout << "arr1[0] = " << arr1[0] << std::endl;
    //int *const p1 = &arr1; NOT OK because &arr1 is a pointer of type 'int (*)[3]', that cannot be assigned to p1, which is a const-pointer to int.
    int *const p1 = arr1;
    std::cout << "type p1: " << typeid(p1).name() << " ; *p1 = " << *p1 << std::endl;

    return 0;
}
