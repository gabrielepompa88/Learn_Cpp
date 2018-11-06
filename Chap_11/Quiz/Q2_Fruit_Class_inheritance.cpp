// g++ -Wall -Wextra -Wpedantic -std=c++11 -o Q2_Fruit_Class_inheritance Q2_Fruit_Class_inheritance.cpp

#include <iostream>
#include <cstring>

class Fruit{

protected:
    
    std::string m_color;
    std::string m_name;
    
public:
    
    Fruit(std::string color, std::string name):
        m_color(color), m_name(name)
    {
    }
    
    std::string getColor() const{return m_color;}
    std::string getName() const{return m_name;}
    
};

class Apple: public Fruit{

public:
    
    Apple(std::string color = "red", std::string name = "apple"):
        Fruit(color, name)
    {
    }
    
};

class Banana: public Fruit{
    
public:
    
    Banana(std::string color = "yellow", std::string name = "banana"):
    Fruit(color, name)
    {
    }
    
};

/* Question 2a:
 
int main()
{
    Apple a("red");
    Banana b;
    
    std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
    
    return 0;
}
 
*/

// Question 2b

class GrannySmith: public Apple{

public:
    
    GrannySmith(std::string color = "green", std::string name = "granny smith apple"):
        Apple(color, name)
    {
    }
    
    std::string getName() const {return m_name;}
};

int main()
{
    Apple a("red");
    Banana b;
    GrannySmith c;
    
    std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
    std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";
    
    return 0;
}

