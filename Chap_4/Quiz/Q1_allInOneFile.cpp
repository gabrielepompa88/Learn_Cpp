/*
 
 This implements the Question 1 all in one file.

 g++ -Wall -Wextra -Wpedantic -std=c++11 -o Q1_allInOneFile Q1_allInOneFile.cpp

*/

#include <iostream>
#include <string>

enum class monsterRace{

    OGRE,
    DRAGON,
    ORC,
    GIANT_SPIDER,
    SLIME
};

struct Monster{

    monsterRace type;   // Monster race
    std::string name;   // Monster name
    double health;      // maximum damage that Monster can take before it dies
    int id;             // unique incremental ID of the Monster instantiated
    
};

int getMonsterId(){
    
    static int s_Id = 1;
    return s_Id++;
}

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
        default:
            return "???";
    }
}

void printMonster(Monster m){

    std::cout << "Instantiated monster num = " << m.id << ". This " << getMonsterRaceName(m.type) << " is named " << m.name << " and has " << m.health << " health.\n";
}

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