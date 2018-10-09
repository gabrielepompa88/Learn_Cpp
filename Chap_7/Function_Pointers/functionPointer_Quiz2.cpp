// g++ -Wall -Wextra -Wpedantic -std=c++11 -o functionPointer_Quiz2 functionPointer_Quiz2.cpp


#include <iostream>

int getInteger()
{
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;
    return x;
}

char getOperation()
{
    char op;
    
    do
    {
        std::cout << "Enter an operation ('+', '-', '*', '/'): ";
        std::cin >> op;
    }
    while (op!='+' && op!='-' && op!='*' && op!='/');
    
    return op;
}

int add(const int a, const int b){return a+b;}
int subtract(const int a, const int b){return a-b;}
int multiply(const int a, const int b){return a*b;}
int divide(const int a, const int b){return a/b;}

typedef int (*arithmeticFcn)(int, int);

struct arithmeticStruct{

    char op;
    arithmeticFcn f;
};

arithmeticFcn getArithmeticFunction(char op, const arithmeticStruct *arithmArr){
    
    for(int i=0; i<4; ++i){
        if(op==arithmArr[i].op){
            return arithmArr[i].f;
        }
    }
    
    return add; // default return add
}

int main()
{
    
    int x = getInteger();
    char op = getOperation();
    int y = getInteger();
    
    const arithmeticStruct arithmeticArray[] = {
        
        {'+', add},
        {'-', subtract},
        {'*', multiply},
        {'/', divide}
    };
    
    
    arithmeticFcn f = getArithmeticFunction(op, arithmeticArray);
    
    std::cout << "f(x,y) = x " << op << " y = " << f(x,y) << std::endl;
    
    return 0;
}