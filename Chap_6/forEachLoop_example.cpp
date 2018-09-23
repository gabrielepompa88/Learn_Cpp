// g++ -Wall -Wextra -Wpedantic -std=c++11 -o forEachLoop_example forEachLoop_example.cpp

#include <iostream>
#include <string>

int main(){


    std::string listOfNames[] = {"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};
    
    std::cout << "Enter a name: ";
    std::string inputName;
    std::cin >> inputName;
    
    int nameFound = 0;
    
    for (const auto &name: listOfNames){
        if(inputName == name){nameFound = 1;}
    }
    
    if(nameFound){
        std::cout << inputName << " was found!\n";
    } else{
        std::cout << inputName << " was NOT found...\n";
    }
    
    return 0;
}
