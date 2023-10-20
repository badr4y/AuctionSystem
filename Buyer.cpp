# include "Buyer.h"
#include "IBuyer.h"
# include "Item.h"

Buyer::Buyer(float maxPossibleBid){
	this->maxPossibleBid = maxPossibleBid;
}

void Buyer::setItem(Item item){
	this->item = item;
}

void Buyer::updatePrice(float currentPrice){
	this->currentPrice = currentPrice;
}

void Buyer::newBid(float newBid){
	item.updatePrice(newBid);
}