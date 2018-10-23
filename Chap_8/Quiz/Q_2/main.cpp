// g++ -Wall -Wextra -Wpedantic -std=c++11 -o Chap_8_Quiz_2_HelloWorld_with_Destructor main.cpp

#include <iostream>

class HelloWorld
{
private:
    char *m_data;
    
public:
    HelloWorld()
    {
        m_data = new char[14];
        const char *init = "Hello, World!";
        for (int i = 0; i < 14; ++i)
            m_data[i] = init[i];
    }
    
    ~HelloWorld()
    {
        delete[] m_data;
    }
    
    void print() const
    {
        std::cout << m_data;
    }
    
};

int main()
{
    HelloWorld hello;
    hello.print();
    
    return 0;
}