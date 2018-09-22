// g++ -Wall -Wextra -Wpedantic -std=c++11 -o dynamicArray_example dynamicArray_example.cpp
 
#include <iostream>
#include <string>
#include <algorithm> //<utility> // for std::swap, if you're not C++11 compatible use: #include <algorithm>

void bubbleSort_StringArray(std::string *x, int L){
    
    for(int i = L-1; i >= 1; --i){
        
        for (int j = 0; j <= i-1; ++j){
    
            if (x[j] > x[j+1]) {std::swap(x[j], x[j+1]);}
        
        }
    }
}


int main()
{
    
    std::cout << "How many names ?\n";
    int nNames;
    std::cin >> nNames;
    
    std::string *nameList = new std::string[nNames];
    
    for(int i=0; i < nNames; ++i){
        std::cout << "Name " << i+1 << ": ";
        std::cin >> nameList[i];
    }
    
    std::cout << "array pre-sorting: ";
    for (int i=0; i < nNames; ++i){
        std::cout << nameList[i] << ' ';
    }
    std::cout << std::endl;
    
    bubbleSort_StringArray(nameList, nNames);
    
    std::cout << "array post-sorting: ";
    for (int i=0; i < nNames; ++i){
        std::cout << nameList[i] << ' ';
    }
    
    std::cout << std::endl;
    
    delete[] nameList;
    
    return 0;
}
