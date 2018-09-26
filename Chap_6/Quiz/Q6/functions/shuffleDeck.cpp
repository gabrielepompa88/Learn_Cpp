#include <iostream>
#include <random> // for std::mt19937
#include <array>

#include "Card.h"

void swapCards(Card &card1, Card &card2);

void shuffleDeck(std::array<Card,52> &deck)
{
    
    // Initialize our mersenne twister with a random seed based on the clock
    std::mt19937 mersenne(static_cast<unsigned int>(time(nullptr)));
    
    // Create a reusable random number generator that generates uniform numbers between 0 and 51
    std::uniform_int_distribution<> die(0, 51);
    
    for(int i=0; i<52; ++i){
        
        int j_random = die(mersenne); // generate the other card
        
        swapCards(deck[i], deck[j_random]); // swap cards

    }
    
}
