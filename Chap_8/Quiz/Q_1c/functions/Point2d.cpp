#include <iostream>

#include "Point2d.h"

void Point2d::print() const
{
    std::cout << "Point(" << m_x << " , " << m_y << ")\n";
}