#ifndef MY_MONSTER_H
#define MY_MONSTER_H

#include "myMonsterRaces.h" // required to know 'monsterRace' type name, unless myMonster.h is #included only when myMonsterRaces.h is included as well.

struct Monster{
    
    monsterRace type;   // Monster race
    std::string name;   // Monster name
    double health;      // maximum damage that Monster can take before it dies
    int id;             // unique incremental ID of the Monster instantiated
    
};

#endif