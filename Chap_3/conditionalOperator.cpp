#include <iostream>

int main()
{
    
    double x, y;
    
    std::cout << "Input two numbers:" << std::endl;
    
    std::cin >> x;
    std::cout << "x = " << x << std::endl;

    std::cin >> y;
    std::cout << "y = " << x << std::endl;
    
    double smaller = (x > y) ? y : x;
    double larger = (x > y) ? x : y;
    
    std::cout << "The larger one is: " << larger << " and the smaller one is: " << smaller << std::endl;
    
    return 0;
}
