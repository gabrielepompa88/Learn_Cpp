#include <iostream>
#include "Card.h"

void swapCards(Card &card1, Card &card2){
    
    Card temp = card2;
    
    card2 = card1;
    card1 = temp;
    
}
