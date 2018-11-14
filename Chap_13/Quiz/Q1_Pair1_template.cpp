// g++ -Wall -Wextra -Wpedantic -std=c++11 -o Q1_Pair1_template Q1_Pair1_template.cpp

#include <iostream>

template <class T>
class Pair1{

private:
    T m_x1;
    T m_x2;
    
public:
    
    Pair1(T x1, T x2): m_x1(x1), m_x2(x2)
    {
    }
    
    T first() const {return m_x1;}
    T second() const {return m_x2;}
};

int main()
{
    Pair1<int> p1(5, 8);
    std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
    
    const Pair1<double> p2(2.3, 4.5);
    std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
    
    return 0;
}