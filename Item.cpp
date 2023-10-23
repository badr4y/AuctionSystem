#include "Item.h"
#include "Buyer.h"
#include <iostream>


// Constructor
Item::Item(float startPrice) {
    currentPrice = startPrice;
}

void Item::updatePrice(float price) {
    currentPrice = price;
}

float Item::getCurrentPrice() const {
    return currentPrice;
}

void Item::attach(Buyer* buyer){
    buyers.push_back(buyer);
}

void Item::detach(Buyer* buyer){
    buyers.remove(buyer);
}

void Item::notify(){
    for (auto& buyer : buyers){
	    buyer->updatePrice(this->currentPrice);
    }

}
Item::~Item() {}
