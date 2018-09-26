#include <iostream>
#include "Card.h"

#include "CardRank.h"

int getCardValue(const Card &card)
{
    switch (card.rank)
    {
        case RANK_2:
            return 2;
        case RANK_3:
            return 3;
        case RANK_4:
            return 4;
        case RANK_5:
            return 5;
        case RANK_6:
            return 6;
        case RANK_7:
            return 7;
        case RANK_8:
            return 8;
        case RANK_9:
            return 9;
        case RANK_10:
        case RANK_JACK:
        case RANK_QUEEN:
        case RANK_KING:
            return 10;
        case RANK_ACE:
            return 11;
    }
    
    return 0;
    
}