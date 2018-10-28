// g++ -Wall -Wextra -Wpedantic -std=c++11 -o SubChap_9_2_quiz_Fraction_operatorMultiplicationOverloaded SubChap_9_2_quiz_Fraction_operatorMultiplicationOverloaded.cpp

#include <iostream>

class Fraction{
    
private:
    int m_num, m_den;
    
public:
    Fraction(int num, int den): m_num(num), m_den(den)
    {
        reduce();
    }
    
    void print() const{
        std::cout << m_num << "/" << m_den << "\n";
    }
    
    // declaring gcd as 'static', it is part of Fraction class (called as Fraction::gcd(int, int)),
    // but can be called without instantiating a Fraction object
    static int gcd(int a, int b) {
        return (b == 0) ? (a > 0 ? a : -a) : gcd(b, a % b);
    }
    
    void reduce(){
        int gcd_num_denum = Fraction::gcd(m_num, m_den);
        m_num /= gcd_num_denum;
        m_den /= gcd_num_denum;
    }
    
    friend Fraction operator* (const Fraction& frac1, const Fraction& frac2){
        return Fraction(frac1.m_num * frac2.m_num, frac1.m_den * frac2.m_den);
    }
    
    friend Fraction operator* (const Fraction& frac, int n){
        return Fraction(frac.m_num * n, frac.m_den);
    }
    
    friend Fraction operator* (int n, const Fraction& frac){
        return frac * n;
    }
};

int main()
{
    Fraction f1(2, 5);
    f1.print();
    
    Fraction f2(3, 8);
    f2.print();
    
    Fraction f3 = f1 * f2;
    f3.print();
    
    Fraction f4 = f1 * 2;
    f4.print();
    
    Fraction f5 = 2 * f2;
    f5.print();
    
    Fraction f6 = Fraction(1, 2) * Fraction(2, 3) * Fraction(3, 4);
    f6.print();
    
    return 0;
}