#include <iostream>

int readNumber(){

    int n;
    
    std::cout << "Input a number: " << std::endl;
    std::cin >> n;
    
    return n;
    
}


void writeAnswer(int n){

    std::cout << "The sum is: " << n << std::endl;
}

int main()
{
    int n1;
    int n2;
    
    n1 = readNumber();
    n2 = readNumber();
    
    writeAnswer(n1+n2);
    
    return 0;
}
