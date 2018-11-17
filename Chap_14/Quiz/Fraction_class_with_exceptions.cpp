// g++ -Wall -Wextra -Wpedantic -std=c++11 -o Fraction_class_with_exceptions Fraction_class_with_exceptions.cpp

#include <iostream>
#include <stdexcept> // for std::runtime_error

class Fraction{

private:
    
    double m_fraction;
    
public:
    
    Fraction(double numerator, double denominator)
    {
        if(denominator == 0.0){
            throw std::runtime_error("Your fraction has an invalid denominator.");
        }
        
    m_fraction = numerator/denominator;
    
    }
    
    friend std::ostream& operator<<(std::ostream &out, const Fraction &frac)
    {
        out << "x/y = " << frac.m_fraction << "\n";
        return out;
    }
};

int main(){

    std::cout << "Enter the numerator: ";
    double x;
    std::cin >> x;
    std::cout << "\n";
    
    std::cout << "Enter the denominator: ";
    double y;
    std::cin >> y;
    std::cout << "\n";
    
    try
    {
        Fraction fraction(x, y);
        
        // if no exception is catched, the value of the x/y fraction is printed.
        std::cout << fraction;
    }
    
    catch(std::exception &exception)
    {
        std::cout << "Exception catched: " << exception.what() << "\n";
    }
    
    std::cout << "...control returned after catch block..." << std::endl;
    
    return 0;
}
