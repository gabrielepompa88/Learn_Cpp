#include "typeOfItems.h"

int countTotalItems(const int *itemList){
    
    int totalItems = 0;
    
    /* NOT OK because itemList is (decayed to) pointer and doesn't know the length
     for(const int &item: itemList){
     totalItems += item;
     }
     */
    
    for(int i = 0; i < MAX_ITEMS; ++i){
        totalItems += itemList[i];
    }
    
    return totalItems;
}
