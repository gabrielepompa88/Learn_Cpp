/*
 
 Compilation (in SubChap_8_13_quiz_1c_Point3dAndVector3d directory):
 
 g++ -Wall -Wextra -Wpedantic -std=c++11 -I ./headers -o SubChap_8_13_quiz_1c_Point3dAndVector3d main.cpp ./functions/Point3d.cpp ./functions/Vector3d.cpp
 
 Separate compilation (in Quiz directory):
 
 cd functions/
 g++ -Wall -Wextra -Wpedantic -std=c++11 -I ../headers -c Point3d.cpp Vector3d.cpp
 cd ..
 g++ -Wall -Wextra -Wpedantic -std=c++11 -I ./headers -c main.cpp
 g++ -o SubChap_8_13_quiz_1c_Point3dAndVector3d main.o ./functions/Point3d.o ./functions/Vector3d.o
 
 */


#include <iostream>

# include "Point3d.h"
# include "Vector3d.h"

int main()
{
    Point3d p(1.0, 2.0, 3.0);
    Vector3d v(2.0, 2.0, -3.0);
    
    p.print();
    p.moveByVector(v);
    p.print();
    
    return 0;
}