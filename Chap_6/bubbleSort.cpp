// g++ -Wall -Wextra -Wpedantic -std=c++11 -o bubbleSort bubbleSort.cpp
 
#include <iostream>
#include <utility>

void bubbleSort(int x[], int L){
    
    for(int i = L-1; i >= 1; --i){
        
        for (int j = 0; j <= i-1; ++j){
    
            if (x[j] > x[j+1]) {std::swap(x[j], x[j+1]);}
        
        }
    }
}

int bubbleSort_earlyBreak(int x[], int L){
    
    int stopIteration = 1;
    
    for(int i = L-1; i >= 1; --i){
        
        int isAlreadySorted = 1;
        
        for (int j = 0; j <= i-1; ++j){
            
            if (x[j] > x[j+1]) {
                
                std::swap(x[j], x[j+1]);
                
                isAlreadySorted = 0;
            }
            
        }
        
        if(isAlreadySorted){
            
            return stopIteration;
        }
        
        ++stopIteration;
    }

    return stopIteration;
}

int main()
{
    int a[] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };
    
    const int length = sizeof(a) / sizeof(a[0]);

    std::cout << "array pre-sorting: ";
    for (int i=0; i < length; ++i)
        std::cout << a[i] << ' ';
    std::cout << std::endl;
    
    
    //bubbleSort(a, length);
    int earlyStopIter = bubbleSort_earlyBreak(a, length);
    
    std::cout << "array post-sorting: ";
    for (int i=0; i < length; ++i)
        std::cout << a[i] << ' ';
    std::cout << std::endl;
    std::cout << "Stop at " << earlyStopIter << " iteration." << std::endl;
    
    return 0;
}
