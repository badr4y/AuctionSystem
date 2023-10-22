#ifndef ITEM_H
#define ITEM_H

#include "Buyer.h"
#include "Auction.h"
#include <list>

class Buyer;

class Item :public Auction {
private:
    float currentPrice;
    std::list<Buyer*> buyers;
    
public:
    virtual ~Item(); 
    Item(float startPrice);

    void updatePrice(float price);

    float getCurrentPrice() const;

    void attach(Buyer* buyer) override;
    void detach(Buyer* buyer) override;
    void notify() override;

};

#endif // ITEM_H

