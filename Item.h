#ifndef ITEM_H
#define ITEM_H

#include "Auction.h"
#include "Buyer.h"
#include <list>

class Item :public Auction {
public:
    
    Item(float startPrice);

    void updatePrice(float price);

    float getCurrentPrice() const;

    void attach(Buyer buyer);
    void detach(Buyer buyer);
    void notify();

private:
    float currentPrice;
    std::list<IBuyer> buyers;
};

#endif // ITEM_H

