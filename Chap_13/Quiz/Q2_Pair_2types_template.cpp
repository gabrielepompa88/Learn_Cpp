// g++ -Wall -Wextra -Wpedantic -std=c++11 -o Q2_Pair_2types_template Q2_Pair_2types_template.cpp

#include <iostream>

template <class T1, class T2>
class Pair{

private:
    T1 m_x1;
    T2 m_x2;
    
public:
    
    Pair(T1 x1, T2 x2): m_x1(x1), m_x2(x2)
    {
    }
    
    T1 first() const {return m_x1;}
    T2 second() const {return m_x2;}
};

int main()
{
    Pair<int, double> p1(5, 6.7);
    std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
    
    const Pair<double, int> p2(2.3, 4);
    std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
    
    return 0;
}