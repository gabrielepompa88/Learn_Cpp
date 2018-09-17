/*
 
 This implements the Question 1 using headers and splitting function across separater files.

 Compilation (in Quiz directory):
 
    g++ -Wall -Wextra -Wpedantic -std=c++11 -I ./headers -o Q1 Q1_main.cpp ./functions/getMonsterId.cpp ./functions/getMonsterRaceName.cpp ./functions/printMonster.cpp
 
 Separate compilation (in Quiz directory):
 
    cd functions/
    g++ -Wall -Wextra -Wpedantic -std=c++11 -I ../headers -c getMonsterId.cpp getMonsterRaceName.cpp printMonster.cpp
    cd ..
    g++ -Wall -Wextra -Wpedantic -std=c++11 -I ./headers -c Q1_main.cpp
    g++ -o Q1 Q1_main.o ./functions/getMonsterId.o ./functions/getMonsterRaceName.o ./functions/printMonster.o

*/

#include <string>

#include "myMonsterRaces.h"
#include "myMonster.h"

void printMonster(Monster m);
int getMonsterId();

int main()
{

    Monster ogre = {monsterRace::OGRE, "Torg", 145, getMonsterId()};
    Monster slime = {monsterRace::SLIME, "Blurp", 23, getMonsterId()};
    Monster aracne = {monsterRace::GIANT_SPIDER, "BlackWidow", 66, getMonsterId()};
    
    printMonster(ogre);
    printMonster(slime);
    printMonster(aracne);
    
    return 0;
}