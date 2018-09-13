#include <iostream>

void computeAnswer(const double x, const double y, const char op){

    if(op == '+'){
        std::cout << x << op << y << " = " << x+y << std::endl;
    } else if(op == '-'){
        std::cout << x << op << y << " = " << x-y << std::endl;
    } else if(op == '*'){
        std::cout << x << op << y << " = " << x*y << std::endl;
    } else if(op == '/'){
        std::cout << x << op << y << " = " << x/y << std::endl;
    } else{
        std::cout << "Not a valid operator inserted... " << std::endl;
    }
}

int main()
{
    
    double x, y;
    char op;
    
    std::cout << "Enter a double value: x = ";
    std::cin >> x;
    
    std::cout << "Enter a double value: y = ";
    std::cin >> y;
    
    std::cout << "Enter one of the following operators [+, -, *, /]: op = ";
    std::cin >> op;
    
    computeAnswer(x,y,op);
    
    return 0;
}
