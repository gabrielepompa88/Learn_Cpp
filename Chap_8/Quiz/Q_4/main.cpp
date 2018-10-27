// g++ -Wall -Wextra -Wpedantic -std=c++11 -I ./headers -o Chap_8_Quiz_4 main.cpp



#include <iostream>
#include <array>
#include <ctime> // for time()
#include <cstdlib> // for rand() and srand()
#include <cassert> // for assert()

class Card
{
public:

    enum CardSuit
    {
        SUIT_CLUB,
        SUIT_DIAMOND,
        SUIT_HEART,
        SUIT_SPADE,
        MAX_SUITS
    };
    
    enum CardRank
    {
        RANK_2,
        RANK_3,
        RANK_4,
        RANK_5,
        RANK_6,
        RANK_7,
        RANK_8,
        RANK_9,
        RANK_10,
        RANK_JACK,
        RANK_QUEEN,
        RANK_KING,
        RANK_ACE,
        MAX_RANKS
    };

private:

    CardRank m_rank;
    CardSuit m_suit;
    
public:
    
    // Card constructor
    Card(CardRank rank = Card::RANK_QUEEN, CardSuit suit = Card::SUIT_HEART):
        m_rank(rank), m_suit(suit)
    {
    }
    
    // print
    void printCard() const;

    // getter for the value of the card
    int getCardValue() const;
    
};

void Card::printCard() const
{
    switch (m_rank)
    {
        case Card::RANK_2:		std::cout << '2'; break;
        case Card::RANK_3:		std::cout << '3'; break;
        case Card::RANK_4:		std::cout << '4'; break;
        case Card::RANK_5:		std::cout << '5'; break;
        case Card::RANK_6:		std::cout << '6'; break;
        case Card::RANK_7:		std::cout << '7'; break;
        case Card::RANK_8:		std::cout << '8'; break;
        case Card::RANK_9:		std::cout << '9'; break;
        case Card::RANK_10:		std::cout << 'T'; break;
        case Card::RANK_JACK:	std::cout << 'J'; break;
        case Card::RANK_QUEEN:	std::cout << 'Q'; break;
        case Card::RANK_KING:	std::cout << 'K'; break;
        case Card::RANK_ACE:	std::cout << 'A'; break;
    }
    
    switch (m_suit)
    {
        case Card::SUIT_CLUB:       std::cout << 'C'; break;
        case Card::SUIT_DIAMOND:    std::cout << 'D'; break;
        case Card::SUIT_HEART:      std::cout << 'H'; break;
        case Card::SUIT_SPADE:      std::cout << 'S'; break;
    }
}

int Card::getCardValue() const
{
    switch (m_rank)
    {
        case Card::RANK_2:		return 2;
        case Card::RANK_3:		return 3;
        case Card::RANK_4:		return 4;
        case Card::RANK_5:		return 5;
        case Card::RANK_6:		return 6;
        case Card::RANK_7:		return 7;
        case Card::RANK_8:		return 8;
        case Card::RANK_9:		return 9;
        case Card::RANK_10:		return 10;
        case Card::RANK_JACK:	return 10;
        case Card::RANK_QUEEN:	return 10;
        case Card::RANK_KING:	return 10;
        case Card::RANK_ACE:	return 11;
    }
    
    return 0;
}


class Deck{
    
private:
    
    std::array<Card, 52> m_deck;
    int m_cardIndex;
    
public:
    
    // Deck constructor
    Deck(int index = 0);
    
    // print deck
    void printDeck() const;

private:
    
    // Generate a random number between min and max (inclusive)
    // Assumes srand() has already been called
    static int getRandomNumber(int min, int max);
    
    // swap card
    static void swapCard(Card &a, Card &b);
    
public:
    
    // shuffle deck
    void shuffleDeck();
    
    // current card
    const Card& dealCard()
    {
        assert (m_cardIndex < 52 && "Card index out of range");
        return m_deck[m_cardIndex++];
    }
    
};

Deck::Deck(int index): m_cardIndex(index)
{
    // m_deck initizialization loop.
    int card = 0;
    for (int suit = 0; suit < Card::MAX_SUITS; ++suit)
        for (int rank = 0; rank < Card::MAX_RANKS; ++rank)
        {
            m_deck[card] = Card(static_cast<Card::CardRank>(rank), static_cast<Card::CardSuit>(suit));
            
            // The following doesn't work because m_suite and m_rank are private (and neither Card is friend of Deck, nor setters are provided by Card)
            //
            // m_deck[card].m_suit = static_cast<Card::CardSuit>(suit);
            // m_deck[card].m_rank = static_cast<Card::CardRank>(rank);
            
            ++card;
        }
    
}

void Deck::printDeck() const
{
    int printedCards = 1;
    
    for (const auto &card : m_deck)
    {
        card.printCard();
        
        if(!(printedCards % 13)){std::cout << "\n";}
        else{std::cout << "\t";}
        
        printedCards++;
    }
    
    std::cout << "\n";
}


int Deck::getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);  // static used for efficiency, so we only calculate this value once
    // evenly distribute the random number across our range
    return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}

void Deck::swapCard(Card &a, Card &b)
{
    Card temp = a;
    a = b;
    b = temp;
}

void Deck::shuffleDeck()
{
    m_cardIndex = 0;
    
    // Step through each card in the deck
    for (int index = m_cardIndex; index < 52; ++index)
    {
        // Pick a random card, any card
        int swapIndex = getRandomNumber(0, 51);
        // Swap it with the current card
        swapCard(m_deck[index], m_deck[swapIndex]);
    }
}

char getPlayerChoice()
{
    std::cout << "(h) to hit, or (s) to stand: ";
    char choice;
    do
    {
        std::cin >> choice;
    } while (choice != 'h' && choice != 's');
    
    return choice;
}

bool playBlackjack(Deck& deck)
{
    int playerTotal = 0;
    int dealerTotal = 0;
    
    // Deal the dealer one card
    dealerTotal += deck.dealCard().getCardValue();
    std::cout << "The dealer is showing: " << dealerTotal << '\n';
    
    // Deal the player two cards
    playerTotal += deck.dealCard().getCardValue();
    playerTotal += deck.dealCard().getCardValue();
    
    // Player goes first
    while (1)
    {
        std::cout << "You have: " << playerTotal << '\n';
        char choice = getPlayerChoice();
        if (choice == 's')
            break;
        
        playerTotal += deck.dealCard().getCardValue();
        
        // See if the player busted
        if (playerTotal > 21)
            return false;
    }
    
    // If player hasn't busted, dealer goes until he has at least 17 points
    while (dealerTotal < 17)
    {
        dealerTotal += deck.dealCard().getCardValue();
        std::cout << "The dealer now has: " << dealerTotal << '\n';
    }
    
    // If dealer busted, player wins
    if (dealerTotal > 21)
        return true;
    
    return (playerTotal > dealerTotal);
    
}

int main()
{
    srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
    rand(); // If using Visual Studio, discard first random value
    
    Deck deck;
    deck.printDeck();
    deck.shuffleDeck();
    deck.printDeck();
    
    if (playBlackjack(deck))
        std::cout << "You win!\n";
    else
        std::cout << "You lose!\n";
    
    return 0;
    
    return 0;
}