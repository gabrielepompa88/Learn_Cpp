// g++ -Wall -Wextra -Wpedantic -std=c++11 -I ./headers -o Q7 Q7_main.cpp ./functions/printCard.cpp ./functions/printDeck.cpp ./functions/swapCards.cpp ./functions/shuffleDeck.cpp ./functions/getCardValue.cpp ./functions/getPlayerChoice.cpp ./functions/playBlackJackWithTie.cpp

#include <iostream>
#include <array>

#include "CardRank.h"
#include "CardSuit.h"
#include "Card.h"
#include "BlackjackResult.h"

void printDeck(const std::array<Card,52> &deck);
void shuffleDeck(std::array<Card,52> &deck);
BlackjackResult playBlackJackWithTie(const std::array<Card, 52> &deck);

int main()
{
    std::array<Card, 52> deck;
 
    // initialize the cards deck
    int card = 0;
    for (int suit = 0; suit < MAX_SUITS; ++suit)
    {
        for (int rank = 0; rank < MAX_RANKS; ++rank)
        {
            deck[card].suit = static_cast<CardSuit>(suit);
            deck[card].rank = static_cast<CardRank>(rank);
            ++card;
        }
    }
    
    // print initialized deck
    printDeck(deck);
    
    // shuffle deck
    shuffleDeck(deck);
    
    // print shuffled deck
    printDeck(deck);
    
    // simulate a Black-Jack game
    /*
    if (playBlackJack(deck))
        std::cout << "You win!\n";
    else
        std::cout << "You lose!\n";
    */
    switch(playBlackJackWithTie(deck))
    {
        case BLACKJACK_PLAYER_WIN:
            std::cout << "You win!\n";
            break;
        case BLACKJACK_DEALER_WIN:
            std::cout << "You lose!\n";
            break;
        case BLACKJACK_TIE:
            std::cout << "It's a tie...\n";
            break;
    }
    
    return 0;
}



