// g++ -Wall -Wextra -Wpedantic -std=c++11 -o SubChap_8_4_quiz_Ball SubChap_8_4_quiz_Ball.cpp

#include <iostream>
#include <string>

class Ball{

    std::string m_color;
    double m_radius;
    
public:
    
    Ball(std::string color){
        m_color = color;
        m_radius = 10.0;
    }
    
    Ball(double radius){
        m_color = "black";
        m_radius = radius;
    }
    
    Ball(std::string color, double radius){
        m_color = color;
        m_radius = radius;
    }
    
    Ball(){
        m_color = "black";
        m_radius = 10.0;
    }
    
    void print(){std::cout << "Color: " << m_color << ", Radius: " << m_radius << "\n";}

};

int main()
{
    Ball def;
    def.print();
    
    Ball blue("blue");
    blue.print();
    
    Ball twenty(20.0);
    twenty.print();
    
    Ball blueTwenty("blue", 20.0);
    blueTwenty.print();
    
    return 0;
}