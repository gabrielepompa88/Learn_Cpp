/*
 
 Can be compiled in two ways:
 
 a) direct compilation: g++ -o Q3 -I ./headers Q3_main.cpp io.cpp
 
 b) separate compilation:
 
    g++ -c -I ./headers Q3_main.cpp io.cpp ---> produces: Q3_main.o and io.o
    g++ -o Q3 Q3_main.o io.o
 
*/

# include "io.h"

int main()
{
    int n1;
    int n2;
    
    n1 = readNumber();
    n2 = readNumber();
    
    writeAnswer(n1+n2);
    
    return 0;
}
