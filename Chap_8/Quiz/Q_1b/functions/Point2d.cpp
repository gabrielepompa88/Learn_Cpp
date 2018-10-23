#include <iostream>
#include <cmath>

#include "Point2d.h"

void Point2d::print() const
{
    std::cout << "Point(" << m_x << " , " << m_y << ")\n";
}

// distance(p1,p2) = sqrt((x1 - x2)^2 + (y1 - y2)^2)
double Point2d::distanceTo(const Point2d &p) const
{

    return sqrt((m_x - p.m_x)*(m_x - p.m_x) + (m_y - p.m_y)*(m_y - p.m_y));
    
}
