#include "Item.h"
#include "Auction.h"
#include "IBuyer.h"


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

