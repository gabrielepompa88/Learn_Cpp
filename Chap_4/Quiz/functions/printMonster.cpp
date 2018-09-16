// g++ -Wall -Wextra -Wpedantic -std=c++11 -c printMonster.cpp -I ../headers

#include <iostream>
#include <string>

#include "myMonsterRaces.h"
#include "myMonster.h"

std::string getMonsterRaceName(monsterRace race);

void printMonster(Monster m){
    
    std::cout << "Instantiated monster num = " << m.id << ". This " << getMonsterRaceName(m.type) << " is named " << m.name << " and has " << m.health << " health.\n";
}
