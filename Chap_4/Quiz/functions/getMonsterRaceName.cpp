// g++ -Wall -Wextra -Wpedantic -std=c++11 -c getMonsterRaceName.cpp -I ../headers

#include <string>
#include "myMonsterRaces.h"

std::string getMonsterRaceName(monsterRace race){
    
    switch(race){
        case monsterRace::OGRE:
            return std::string("Ogre");
        case monsterRace::DRAGON:
            return std::string("Dragon");
        case monsterRace::ORC:
            return std::string("Orc");
        case monsterRace::GIANT_SPIDER:
            return std::string("Giant Spider");
        case monsterRace::SLIME:
            return std::string("Slime");
    }
}
