#ifndef ITEM_H
#define ITEM_H

#include "Buyer.h"
#include "Auction.h"
#include <list>
#include <ctime>

class Buyer;

class Item :public Auction {
private:
    float currentPrice;
    std::list<Buyer*> buyers;
    time_t currentTime;

    
public:
    virtual ~Item(); 
    Item(float startPrice);

    void updatePrice(float price);
    void setCurrentTime();
    float getCurrentPrice() const;
    time_t getCurrentTime();

    void attach(Buyer* buyer) override;
    void detach(Buyer* buyer) override;
    void notify() override;

};

#endif // ITEM_H

