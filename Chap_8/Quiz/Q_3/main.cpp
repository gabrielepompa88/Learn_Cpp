/*
 
 Compilation (in Quiz/Q_3 directory):
 
 g++ -Wall -Wextra -Wpedantic -std=c++11 -I ./headers -o Chap_8_Quiz_3 main.cpp ./functions/Monster.cpp ./functions/MonsterGenerator.cpp
 
 Separate compilation (in Quiz directory):
 
 cd functions/
 g++ -Wall -Wextra -Wpedantic -std=c++11 -I ../headers -c Monster.cpp
 g++ -Wall -Wextra -Wpedantic -std=c++11 -I ../headers -c MonsterGenerator.cpp
 cd ..
 g++ -Wall -Wextra -Wpedantic -std=c++11 -I ./headers -c main.cpp
 g++ -o Chap_8_Quiz_3 main.o ./functions/Monster.o
 
 */


#include <iostream>
#include <ctime> // for std::time()

#include "Monster.h"
#include "MonsterGenerator.h"

int main()
{
    
    std::srand(static_cast<unsigned int>(std::time(nullptr))); // set initial seed value to system clock
    //std::srand(5323);
    std::rand();
    
    std::cout << "There are " << Monster::MAX_MONSTER_TYPES << " monsters \n";
    
    Monster skele(Monster::SKELETON, "Bones", "*rattle*", 4);
    skele.print();
    
    Monster m = MonsterGenerator::generateMonster();
    m.print();
    
    return 0;
}