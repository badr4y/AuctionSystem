#ifndef BUYER
#define BUYER

#include "Item.h"
#include "IBuyer.h"

class Item;

class Buyer : public IBuyer {

private:
	float maxPossibleBid;
	float currentPrice;
	Item* item;

public:

	Buyer(float maxPossibleBid, Item* item);
	~Buyer();

	void setCurrentPrice(float currentPrice);
	void setItem(Item* item);
	void updatePrice(float newPrice) override;
	void newBid(float newBid);

};

#endif
