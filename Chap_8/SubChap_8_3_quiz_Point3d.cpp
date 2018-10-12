// g++ -Wall -Wextra -Wpedantic -std=c++11 -o SubChap_8_3_quiz_Point3d SubChap_8_3_quiz_Point3d.cpp

#include <iostream>
#include <tuple>

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
    
    // get method to retrieve private member values
    std::tuple<double, double, double> getValues(){
        return std::make_tuple(m_x, m_y, m_z);
    }
    
};

int main()
{
    Point3d point;
    point.setValues(1.0, 2.0, 3.0);
    
    point.print();
    
    double x, y, z;
    std::tie(x, y, z) = point.getValues();
    std::cout << "Print in main: " << "<" << x << "," << y << "," << z << ">" << "\n";
    
    return 0;
}
