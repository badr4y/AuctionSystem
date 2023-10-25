#include "Buyer.h"
#include "Item.h"
#include <ctime>
#include <iostream>


Buyer::Buyer(float maxPossibleBid, Item* item): maxPossibleBid(maxPossibleBid), currentPrice(), item(item) {
	this->maxPossibleBid = maxPossibleBid;
	this->item = item;
	currentPrice = item->getCurrentPrice();
}

float Buyer::getCurrentPrice() {
	return this->currentPrice;
}

void Buyer::setItem(Item* item){
	this->item = item;
}
void Buyer::setCurrentPrice(float currentPrice) {
	this->currentPrice = currentPrice;
}

void Buyer::updatePrice(float newPrice) {
	this->currentPrice = newPrice;
}

void Buyer::newBid(float newBid, time_t bidTime)
{
	if (bidTime - (this->item->getCurrentTime()) >= 2) {
		std::cout << "Can't bid anymore : Time elapsed, the auction has ended." << std::endl;
	}
	else if (newBid <= this->currentPrice) {
		std::cout << "Can't bid : Bid smaller than current price of the item." << std::endl;
	}
	else {
		std::cout << "Bid accepted." << std::endl;
		item->updatePrice(newBid);
	}
}
Buyer::~Buyer() {};