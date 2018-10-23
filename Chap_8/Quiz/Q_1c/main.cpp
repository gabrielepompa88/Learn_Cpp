/*
 
 Compilation (in Quiz/Q_1c directory):
 
 g++ -Wall -Wextra -Wpedantic -std=c++11 -I ./headers -o Chap_8_Quiz_1c_Point2d main.cpp ./functions/Point2d.cpp ./functions/distanceFrom.cpp
 
 Separate compilation (in Quiz directory):
 
 cd functions/
 g++ -Wall -Wextra -Wpedantic -std=c++11 -I ../headers -c Point2d.cpp
 g++ -Wall -Wextra -Wpedantic -std=c++11 -I ../headers -c distanceFrom.cpp
 cd ..
 g++ -Wall -Wextra -Wpedantic -std=c++11 -I ./headers -c main.cpp
 g++ -o Chap_8_Quiz_1c_Point2d main.o ./functions/Point2d.o
 
 */


#include <iostream>

# include "Point2d.h"

int main()
{
    Point2d first;
    Point2d second(3.0, 4.0);
    first.print();
    second.print();
    std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';
    
    return 0;
}