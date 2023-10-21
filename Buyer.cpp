# include "Buyer.h"
#include "IBuyer.h"
# include "Item.h"


Buyer::Buyer(float maxPossibleBid, Item& item): maxPossibleBid(maxPossibleBid), item(item){
	this->maxPossibleBid = maxPossibleBid;
	this->item = item;
	currentPrice = item.getCurrentPrice();
}

void Buyer::setItem(Item& item){
	this->item = item;
}
void setCurrentPrice(float currentPrice);

void Buyer::updatePrice(float currentPrice){
	this->currentPrice = currentPrice;
}

void Buyer::newBid(float newBid){
	item.updatePrice(newBid);
}

Buyer::~Buyer(){}
