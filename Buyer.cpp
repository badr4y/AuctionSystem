#include "Buyer.h"
#include "Item.h"
#include <ctime>
#include <iostream>


Buyer::Buyer(float maxPossibleBid, Item* item): maxPossibleBid(maxPossibleBid), item(item){
	this->maxPossibleBid = maxPossibleBid;
	this->item = item;
	currentPrice = item->getCurrentPrice();
}

void Buyer::setItem(Item* item){
	this->item = item;
}
void Buyer::setCurrentPrice(float currentPrice) {
	this->currentPrice = currentPrice;
}

void Buyer::updatePrice(float newPrice) {
	this->currentPrice = currentPrice;
}

void Buyer::newBid(float newBid, time_t bidTime)
{
	if (bidTime - (this->item->getCurrentTime()) >= 2) {
		std::cout << "time elapsed, the auction has ended" << std::endl;
	}
	else if (newBid <= this->currentPrice) {
		std::cout << "bid not enough" << std::endl;
	}
	else {
		item->updatePrice(newBid);
	}
}
Buyer::~Buyer() {};