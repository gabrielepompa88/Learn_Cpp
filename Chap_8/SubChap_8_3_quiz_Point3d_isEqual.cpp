// g++ -Wall -Wextra -Wpedantic -std=c++11 -o SubChap_8_3_quiz_Point3d_isEqual SubChap_8_3_quiz_Point3d_isEqual.cpp

#include <iostream>

class Point3d{
    
    double m_x, m_y, m_z;
    
public:
    
    void setValues(double x0, double y0, double z0){
    
        m_x = x0;
        m_y = y0;
        m_z = z0;
    }
    
    void print(){
    
        std::cout << "<" << m_x << "," << m_y << "," << m_z << ">" << "\n";
    }
    
    bool isEqual(const Point3d &P){
    
        if((m_x == P.m_x) && (m_y == P.m_y) && (m_z == P.m_z)){
            return true;
        } else{
            return false;
        }
    }
};

int main()
{
    Point3d point1;
    point1.setValues(1.0, 2.0, 3.0);
    
    Point3d point2;
    point2.setValues(1.0, 2.0, 3.0);
    
    if (point1.isEqual(point2))
        std::cout << "point1 and point2 are equal\n";
    else
        std::cout << "point1 and point2 are not equal\n";
    
    Point3d point3;
    point3.setValues(3.0, 4.0, 5.0);
    
    if (point1.isEqual(point3))
        std::cout << "point1 and point3 are equal\n";
    else
        std::cout << "point1 and point3 are not equal\n";
    
    return 0;
}