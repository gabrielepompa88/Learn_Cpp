// g++ -Wall -Wextra -Wpedantic -std=c++11 -o Q3b Q3b.cpp

#include <iostream>
#include <memory> // for std::shared_ptr

class Something{}; // assume Something is a class that can throw an exception

template <typename T>
void doSomething(std::shared_ptr<T>, std::shared_ptr<T>)
{
    std::cout << "Hello!" << "\n";
}

int main()
{
    /* (ORIGINAL)
     
    doSomething(std::shared_ptr<Something>(new Something), std::shared_ptr<Something>(new Something));
    
    */
    
    // Correct version below
    doSomething(std::make_shared<Something>(), std::make_shared<Something>());
    
    // or explicitly:
    /*
    auto ptr1 = std::make_shared<Something>();
    auto ptr2(ptr1);
    doSomething(ptr1, ptr2);
    */
    
    
    return 0;
}