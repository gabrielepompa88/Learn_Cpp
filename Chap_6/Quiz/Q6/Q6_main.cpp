// g++ -Wall -Wextra -Wpedantic -std=c++11 -I ./headers -o Q6 Q6_main.cpp ./functions/printCard.cpp ./functions/printDeck.cpp ./functions/swapCards.cpp ./functions/shuffleDeck.cpp ./functions/getCardValue.cpp

#include <iostream>
#include <array>

#include "CardRank.h"
#include "CardSuit.h"
#include "Card.h"

//void printCard(const Card &card);
void printDeck(const std::array<Card,52> &deck);
//void swapCards(Card &card1, Card &card2);
void shuffleDeck(std::array<Card,52> &deck);
int getCardValue(const Card &card);

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
    
    return 0;
}



