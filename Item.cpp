#include "Item.h"
#include "Buyer.h"
#include <iostream>
#include <ctime>


// Constructor
Item::Item(float startPrice) : currentPrice(startPrice), buyers(), currentTime() {
    time(&currentTime);
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

void Item::setCurrentTime() {
    time(&this->currentTime);
}

time_t Item::getCurrentTime() {
    return currentTime;
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
