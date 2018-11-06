// g++ -Wall -Wextra -Wpedantic -std=c++11 -o Q2 Q2.cpp

#include <iostream>
#include <vector>

class Point
{
private:
    int m_x = 0;
    int m_y = 0;
    int m_z = 0;
    
public:
    Point(int x, int y, int z)
    : m_x(x), m_y(y), m_z(z)
    {
        
    }
    
    friend std::ostream& operator<<(std::ostream &out, const Point &p)
    {
        out << "Point(" << p.m_x << ", " << p.m_y << ", " << p.m_z << ")";
        return out;
    }
};

class Shape{

public:
        
    virtual std::ostream& print(std::ostream &out) const = 0;
    
    friend std::ostream& operator<<(std::ostream &out, Shape &s)
    {
        return s.print(out);
    }
    
    virtual ~Shape(){}
};

class Circle: public Shape{
    
private:
    
    Point m_center;
    double m_radius;
    
public:
    
    Circle(const Point &p, const double r):
        m_center(p), m_radius(r)  // here the (default) copy constructor of Point is, probably, elided
    {
    }
    
    virtual std::ostream& print(std::ostream &out) const override
    {
        out << "Circle(" << m_center << ", "<< m_radius << ")";
        return out;
    }
    int getRadius() { return m_radius;  }
};

// h/t to reader Olivier for this updated solution
int getLargestRadius(const std::vector<Shape*> &v)
{
    int largestRadius { 0 };
    
    // Loop through all the shapes in the vector
    for (auto const &element : v)
    {
        // // Ensure the dynamic cast succeeds by checking for a null pointer result
        if (Circle *c = dynamic_cast<Circle*>(element))
        {
            if (c->getRadius() > largestRadius)
                largestRadius = c->getRadius();
        }
    }
    
    return largestRadius;
}

class Triangle: public Shape{
    
private:
    
    Point m_p1;
    Point m_p2;
    Point m_p3;
    
public:
    
    Triangle(const Point &p1, const Point &p2, const Point &p3):
        m_p1(p1), m_p2(p2), m_p3(p3) // here the (default) copy constructor of Point is, probably, elided
    {
    }

    virtual std::ostream& print(std::ostream &out) const override
    {
        out << "Triangle(" << m_p1 << ", "<< m_p2 << ", "<< m_p3 << ")";
        return out;
    }
};

int main()
{
    Circle c(Point(1, 2, 3), 7);
    std::cout << c << '\n';
    
    Triangle t(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9));
    std::cout << t << '\n';
    
    std::vector<Shape*> v;
    v.push_back(new Circle(Point(1, 2, 3), 7));
    v.push_back(new Triangle(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9)));
    v.push_back(new Circle(Point(4, 5, 6), 3));
    
    // print each shape in vector v on its own line here
    for (auto const &element : v)
    {
        std::cout << *element << "\n"; // element will be a const reference to a Shape*
    }
    
    std::cout << "The largest radius is: " << getLargestRadius(v) << '\n'; // write this function
    
    // delete each element in the vector here
    for (auto const &element : v)
    {
        delete element;
    }
    
    return 0;
}



