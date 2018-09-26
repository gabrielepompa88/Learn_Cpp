#include <iostream>
#include <array>

#include "Card.h"

char getPlayerChoice();
int getCardValue(const Card &card, const int handCurrentValue);

bool playBlackJack(const std::array<Card, 52> &deck)
{
    // Set up the initial game state
    const Card *cardPtr = &deck[0];
    
    int playerTotal = 0;
    int dealerTotal = 0;
    
    // Deal the dealer one card
    dealerTotal += getCardValue(*cardPtr++, dealerTotal);
    std::cout << "The dealer is showing: " << dealerTotal << '\n';
    
    // Deal the player two cards
    playerTotal += getCardValue(*cardPtr++, playerTotal);
    playerTotal += getCardValue(*cardPtr++, playerTotal);
    
    // Player goes first
    while (true) // infinite loop (until we break or return)
    {
        std::cout << "You have: " << playerTotal << '\n';
        
        // See if the player has busted
        if (playerTotal > 21)
            return false;
        
        char choice = getPlayerChoice();
        if (choice == 's')
            break;
        
        playerTotal += getCardValue(*cardPtr++, playerTotal);
    }
    
    // If player hasn't busted, dealer goes until he has at least 17 points
    while (dealerTotal < 17)
    {
        dealerTotal += getCardValue(*cardPtr++, dealerTotal);
        std::cout << "The dealer now has: " << dealerTotal << '\n';
    }
    
    // If dealer busted, player wins
    if (dealerTotal > 21)
        return true;
    
    return (playerTotal > dealerTotal);
}
