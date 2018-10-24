#ifndef MONSTER_H
#define MONSTER_H

#include <string>

class Monster{
    
public:

    enum MonsterType{
        
        DRAGON,
        GOBLIN,
        OGRE,
        ORC,
        SKELETON,
        TROLL,
        VAMPIRE,
        ZOMBIE,
        MAX_MONSTER_TYPES
    };
    
private:
    
    MonsterType m_type;
    std::string m_name, m_roar;
    int m_hitPoints;

public:
    
    Monster(MonsterType type, std::string name, std::string roar, int points):
        m_type(type), m_name(name), m_roar(roar), m_hitPoints(points)
    {
    }
    
    std::string getTypeString() const;
    
    void print() const;

};

#endif