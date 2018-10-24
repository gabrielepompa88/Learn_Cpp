#include <iostream>
#include <string>

#include "Monster.h"

std::string Monster::getTypeString() const
{
    switch(m_type){
        case Monster::DRAGON:
            return std::string("Dragon");
        case Monster::GOBLIN:
            return std::string("Goblin");
        case Monster::OGRE:
            return std::string("Ogre");
        case Monster::ORC:
            return std::string("Orc");
        case Monster::SKELETON:
            return std::string("Skeleton");
        case Monster::TROLL:
            return std::string("Troll");
        case Monster::VAMPIRE:
            return std::string("Vampire");
        case Monster::ZOMBIE:
            return std::string("Zombie");
        default:
            return "???";
    }
    
}

void Monster::print() const
{
    std::cout << m_name << " the " << getTypeString() << " has " << m_hitPoints << " hit points and says " << m_roar << "\n";
}
