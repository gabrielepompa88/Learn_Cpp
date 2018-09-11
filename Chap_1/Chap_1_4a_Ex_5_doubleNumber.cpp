#include <iostream>

int doubleNumber(int x){

    return 2*x;
}

int main(){
    
    int a;

    std::cout << "Enter an integer number: " << std::endl;
    std::cin >> a;
    std::cout << "you entered a = " << a << std::endl;
    std::cout << "2*a = " << doubleNumber(a) << std::endl;
    
    return 0;
}