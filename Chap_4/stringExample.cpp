/*

    g++ -Wall -Wextra -Wpedantic -std=c++11 -o stringExample stringExample.cpp 
 
*/

#include <string>
#include <iostream>

int main()
{
    std::cout << "Enter your full name: ";
    std::string name;
    std::getline(std::cin, name); // read a full line of text into name
    
    std::cout << "Enter your age: ";
    int age { 0 }; // age needs to be an integer, not a string, so we can do math with it
    std::cin >> age;
    
    int letters = name.length(); // get number of letters in name (including spaces)
    double agePerLetter = static_cast<double>(age) / letters; // static cast age to double to avoid integer division
    std::cout << "You've lived " << agePerLetter << " years for each letter in your name.\n";
    
    return 0;
}