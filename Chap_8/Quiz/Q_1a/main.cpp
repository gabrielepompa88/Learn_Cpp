/*
 
 Compilation (in SubChap_8_13_quiz_1c_Point3dAndVector3d directory):
 
 g++ -Wall -Wextra -Wpedantic -std=c++11 -I ./headers -o Chap_8_Quiz_1a_Point2d main.cpp ./functions/Point2d.cpp
 
 Separate compilation (in Quiz directory):
 
 cd functions/
 g++ -Wall -Wextra -Wpedantic -std=c++11 -I ../headers -c Point2d.cpp
 cd ..
 g++ -Wall -Wextra -Wpedantic -std=c++11 -I ./headers -c main.cpp
 g++ -o Chap_8_Quiz_1a_Point2d main.o ./functions/Point2d.o
 
 */


#include <iostream>

# include "Point2d.h"

int main()
{
    Point2d first;
    Point2d second(3.0, 4.0);
    first.print();
    second.print();
    
    return 0;
}