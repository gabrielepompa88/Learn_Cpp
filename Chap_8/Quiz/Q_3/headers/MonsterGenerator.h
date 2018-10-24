#ifndef MONSTER_GENERATOR_H
#define MONSTER_GENERATOR_H

#include "Monster.h"

class MonsterGenerator{

public:
    
    static int getRandomNumber(int min, int max);
    
    static Monster generateMonster();

};

#endif