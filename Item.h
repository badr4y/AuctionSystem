#ifndef ITEM_H
#define ITEM_H

#include "Auction.h"

class Item :public Auction {
public:
    
    Item(float startPrice);

    void updatePrice(float price);

    float getCurrentPrice() const;

private:
    float currentPrice;
};

#endif // ITEM_H

