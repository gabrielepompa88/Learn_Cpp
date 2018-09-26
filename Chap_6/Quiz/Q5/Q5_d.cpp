// g++ -Wall -Wextra -Wpedantic -std=c++11 -o Q5_d Q5_d.cpp

#include <iostream>

int* allocateArray(const int length)
{
    //int temp[length];
    int *temp = new int[length];
    return temp;
}

int main()
{
    
    const int L = 3;

    int *p = allocateArray(L);
    
    for(int i=0; i<L; ++i){std::cout << p[i] << std::endl;}
    
    return 0;
}
