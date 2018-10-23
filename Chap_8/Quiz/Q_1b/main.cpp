/*
 
 Compilation (in Quiz/Q_1b directory):
 
 g++ -Wall -Wextra -Wpedantic -std=c++11 -I ./headers -o Chap_8_Quiz_1b_Point2d main.cpp ./functions/Point2d.cpp
 
 Separate compilation (in Quiz directory):
 
 cd functions/
 g++ -Wall -Wextra -Wpedantic -std=c++11 -I ../headers -c Point2d.cpp
 cd ..
 g++ -Wall -Wextra -Wpedantic -std=c++11 -I ./headers -c main.cpp
 g++ -o Chap_8_Quiz_1b_Point2d main.o ./functions/Point2d.o
 
 */


#include <iostream>

# include "Point2d.h"

int main()
{
    Point2d first;
    Point2d second(3.0, 4.0);
    first.print();
    second.print();
    std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';
    
    return 0;
}