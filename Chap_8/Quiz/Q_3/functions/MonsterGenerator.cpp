#include <iostream>
#include <cstdlib> // for std::rand() and std::srand()

#include "Monster.h"
#include "MonsterGenerator.h"

int MonsterGenerator::getRandomNumber(int min, int max){

    // static used for efficiency, so we only calculate this value once
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    
    // evenly distribute the random number across our range
    return static_cast<int>(std::rand() * fraction * (max - min + 1) + min);
}

Monster MonsterGenerator::generateMonster(){
    
    // random MonsterType
    Monster::MonsterType randomMonsterType = static_cast<Monster::MonsterType>(getRandomNumber(0, Monster::MAX_MONSTER_TYPES - 1));
    
    // random hit points
    int randomHitPoints = getRandomNumber(1,100);
    
    // names
    static std::string s_names[6] = {"Spyro", "Tuk", "Karkol", "Grunt", "Bones", "Vlad"};
    
    // roars
    static std::string s_roars[6] = {"AAAHHH", "EEEHHH", "IIIHHH", "OOOHHH", "UUUHHH", "HHHHHH"};
    
    return Monster(randomMonsterType, s_names[getRandomNumber(0,5)], s_roars[getRandomNumber(0,5)], randomHitPoints);
}
