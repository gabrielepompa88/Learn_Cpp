// g++ -Wall -Wextra -Wpedantic -std=c++11 -o SubChap_8_2_quiz_IntPair SubChap_8_2_quiz_IntPair.cpp

#include <iostream>

class IntPair{

public:
    
    int m_a;
    int m_b;
    
    void set(int m, int n){
    
        m_a = m;
        m_b = n;
    }
    
    void print(){
    
        std::cout << "a = " << m_a << "; b = " << m_b << "\n";
    }
};

int main()
{
    IntPair p1;
    p1.set(1, 1); // set p1 values to (1, 1)
    
    IntPair p2{ 2, 2 }; // initialize p2 values to (2, 2)
    
    p1.print();
    p2.print();
    
    return 0;
}