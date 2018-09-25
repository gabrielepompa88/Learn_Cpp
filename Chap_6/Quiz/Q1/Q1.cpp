// g++ -Wall -Wextra -Wpedantic -std=c++11 -I ./headers -o Q1 Q1.cpp ./functions/countTotalItems.cpp

#include <iostream>
#include "typeOfItems.h"

int countTotalItems(const int *itemList);

int main()
{
    int playerItems[MAX_ITEMS] = {2, 5, 10};
    
    std::cout << "Player carries " << countTotalItems(playerItems) << " items in total (of MAX_ITEMS = " <<MAX_ITEMS << " different kinds)." << '\n';

    return 0;
}