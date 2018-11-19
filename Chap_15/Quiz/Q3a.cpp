// g++ -Wall -Wextra -Wpedantic -std=c++11 -o Q3a Q3a.cpp

#include <iostream>
#include <memory> // for std::shared_ptr

class Resource
{
public:
    Resource() { std::cout << "Resource acquired\n"; }
    ~Resource() { std::cout << "Resource destroyed\n"; }
};

int main()
{
    /* (ORIGINAL)
     
    Resource *res = new Resource;
    std::shared_ptr<Resource> ptr1(res);
    std::shared_ptr<Resource> ptr2(res);
     
     ptr2 was created from res instead of from ptr1. This means that you now have two std::shared_ptr each independently trying to manage the Resource (they are not aware of each other). When one goes out of scope, the other will be left with a dangling pointer.
     ptr2 should be copied from ptr1 instead of from res, and std::make_shared() should be used
     
     */
    
    // Correct version below
    std::shared_ptr<Resource> ptr1 = std::make_shared<Resource>(); // or, directly:  auto ptr1 =...;
    auto ptr2 = ptr1; // or: auto ptr2(ptr1);
    
    return 0;
}