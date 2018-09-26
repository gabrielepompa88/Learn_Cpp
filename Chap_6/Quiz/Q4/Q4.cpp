// g++ -Wall -Wextra -Wpedantic -std=c++11 -o Q4 Q4.cpp

#include <iostream>
#include <cstring>

void printStringCharByChar(const char *strArr){

    while(strcmp(strArr, "\0")){std::cout << *strArr++ << std::endl;}
    
    /*
     
    Alternative 1:
     
    while(*strArr != '\0'){std::cout << *strArr++ << std::endl;}
 
    Alternative 2:
     
    char nullStr[] = "\0";
    while(*strArr != *nullStr){std::cout << *strArr++ << std::endl;}
 
    */
}

int main()
{
    
    char inputString[] = "Hello, world!";
    
    printStringCharByChar(inputString);
    
    return 0;
}