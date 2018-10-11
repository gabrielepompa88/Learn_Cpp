// What's wrong with these programs?

// a
int& doSomething()
{
    int array[] = { 1, 2, 3, 4, 5 };
    return array[3];
}

// SOLUTION: "array" has local scope, thus it will be destroyed at the end of "doSomething", returning garbage reference.

// b
int sumTo(int value)
{
    return value + sumTo(value - 1);
}

// SOLUTIONS: recursion never stops.

// c
float divide(float x, float y)
{
    return x / y;
}

double divide(float x, float y)
{
    return x / y;
}

// SOLUTION: returned value doesn't count to distinguish overloaded functions. Also, division by zero risk.

// d
#include <iostream>

int main()
{
    int array[100000000];
    
    for (const auto &x: array)
        std::cout << x << ' ';
    
    return 0;
}

// SOLUTION: stack overflow.

// e
#include <iostream>

int main(int argc, char *argv[])
{
    int age = argv[1]
    std::cout << "The users age is " << age << '\n';
    
    return 0;
}

// SOLUTION: argv[1] exists only if argc > 1. Also, command line arguments are C-style strings. If needed, they have to be converted to numeric values.