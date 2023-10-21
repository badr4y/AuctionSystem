#include "Buyer.h"
#include "Item.h"


Buyer::Buyer(float maxPossibleBid, Item* item): maxPossibleBid(maxPossibleBid), item(item){
	this->maxPossibleBid = maxPossibleBid;
	this->item = item;
	currentPrice = item->getCurrentPrice();
}

void Buyer::setItem(Item* item){
	this->item = item;
}
void setCurrentPrice(float currentPrice);

void Buyer::updatePrice(float newPrice){
	this->currentPrice = currentPrice;
}

void Buyer::newBid(float newBid){
	item->updatePrice(newBid);
}

Buyer::~Buyer(){}
