// g++ -Wall -Wextra -Wpedantic -std=c++11 -o Q3_StringValuePair Q3_StringValuePair.cpp

#include <iostream>
#include <cstring>

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

template <class T2>
class StringValuePair: public Pair<std::string, T2>
{
public:
    
    StringValuePair(std::string s, T2 x2): Pair<std::string, T2>(s, x2)
    {
    }
    
};

int main()
{
    StringValuePair<int> svp("Hello", 5);
    std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';
    
    return 0;
}