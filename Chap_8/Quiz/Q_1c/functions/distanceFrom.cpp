#include <cmath>

#include "Point2d.h"

// distance(p1,p2) = sqrt((x1 - x2)^2 + (y1 - y2)^2)
double distanceFrom(const Point2d &p1, const Point2d &p2) // non-member function cannot have 'const' qualifier
{

    return sqrt((p1.m_x - p2.m_x)*(p1.m_x - p2.m_x) + (p1.m_y - p2.m_y)*(p1.m_y - p2.m_y));
    
}
