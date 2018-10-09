// g++ -Wall -Wextra -Wpedantic -std=c++11 -o functionPointer_Quiz1 functionPointer_Quiz1.cpp


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

arithmeticFcn getArithmeticFunction(char op){

    switch (op) {
        case '+':
            return add;
        case '-':
            return subtract;
        case '*':
            return multiply;
        case '/':
            return divide;
        default:
            return add;
    }
}

int main()
{
    int x = getInteger();
    char op = getOperation();
    int y = getInteger();
    
    arithmeticFcn f = getArithmeticFunction(op);
    
    std::cout << "f(x,y) = x " << op << " y = " << f(x,y) << std::endl;
    
    return 0;
}