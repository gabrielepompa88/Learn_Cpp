/*
 
 Compilation (in Quiz/Q_3a directory):
 
 g++ -Wall -Wextra -Wpedantic -std=c++11 -I ./headers -o Chap_8_Quiz_3a main.cpp
 
 Separate compilation (in Quiz directory):
 
 g++ -Wall -Wextra -Wpedantic -std=c++11 -I ./headers -c main.cpp
 g++ -o Chap_8_Quiz_3a main.o
 
 */


#include <iostream>

# include "MonsterType.h"

int main()
{
    
    std::cout << "There are " << MAX_MONSTER_TYPES << " monsters \n";
    
    return 0;
}