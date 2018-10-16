// g++ -Wall -Wextra -Wpedantic -std=c++11 -o SubChap_8_4_quiz_Ball_default_parameters SubChap_8_4_quiz_Ball_default_parameters.cpp

#include <iostream>
#include <string>

class Ball{

    std::string m_color;
    double m_radius;
    
public:
    
    Ball(const std::string &color = "black", double radius = 10.0){
        m_color = color;
        m_radius = radius;
    }

    Ball(double radius){
        m_color = "black";
        m_radius = radius;
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