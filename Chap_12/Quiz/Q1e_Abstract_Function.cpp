// g++ -Wall -Wextra -Wpedantic -std=c++11 -o Q1e_Abstract_Function Q1e_Abstract_Function.cpp

#include <iostream>

class Base
{
protected:
    int m_value;
    
public:
    Base(int value)
    : m_value(value)
    {
    }
    
    virtual const char* getName() { return "Base"; }
};

class Derived : public Base
{
public:
    Derived(int value)
    : Base(value)
    {
    }
    
    virtual const char* getName() = 0;
};

const char* Derived::getName()
{
    return "Derived";
}

int main()
{
    Derived d(5);       // ERROR 1: trying to instantiate an abstract class
    Base &b = d;
    std::cout << b.getName(); // ERROR 2: trying to call a pure virtual function
    
    return 0;
}