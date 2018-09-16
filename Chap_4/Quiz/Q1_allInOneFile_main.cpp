/*
 
 This implements the Question 1 all in one file.

 g++ -Wall -Wextra -Wpedantic -std=c++11 -o Q1_allInOneFile_main Q1_allInOneFile_main.cpp

*/

#include <iostream>
#include <string>

enum class monsterRace{

    Ogre,
    Dragon,
    Orc,
    GiantSpider,
    Slime
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

void printMonster(Monster m){

    std::cout << "Instantiated monster num = " << m.id << ". This " << getMonsterRaceName(m.type) << " is named " << m.name << " and has " << m.health << " health.\n";
}

int main()
{

    Monster ogre = {monsterRace::Ogre, "Torg", 145, getMonsterId()};
    Monster slime = {monsterRace::Slime, "Blurp", 23, getMonsterId()};
    Monster aracne = {monsterRace::GiantSpider, "BlackWidow", 66, getMonsterId()};
    
    printMonster(ogre);
    printMonster(slime);
    printMonster(aracne);
    
    return 0;
}