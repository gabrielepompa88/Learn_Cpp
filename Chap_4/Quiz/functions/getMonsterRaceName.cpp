// g++ -Wall -Wextra -Wpedantic -std=c++11 -c getMonsterRaceName.cpp -I ../headers

#include <string>
#include "myMonsterRaces.h"

std::string getMonsterRaceName(monsterRace race){
    
    switch(race){
        case monsterRace::Ogre:
            return std::string("Ogre");
        case monsterRace::Dragon:
            return std::string("Dragon");
        case monsterRace::Orc:
            return std::string("Orc");
        case monsterRace::GiantSpider:
            return std::string("Giant Spider");
        case monsterRace::Slime:
            return std::string("Slime");
    }
}
