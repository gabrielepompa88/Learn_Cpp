#include <iostream>
#include <array>

#include "Card.h"

void printCard(const Card &card);

void printDeck(const std::array<Card,52> &deck)
{
    int printedCards = 1;
    
    for(const Card &card: deck){
        
        printCard(card);
        
        if(!(printedCards % 5)){std::cout << "\n";}
        else{std::cout << "\t";}
        
        printedCards++;
        
    }
    
    std::cout << "\n";

}
