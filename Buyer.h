#ifndef BUYER
#define BUYER

#include "IBuyer.h"
#include "Item.h"

class Buyer : public IBuyer {

private:
	float maxPossibleBid;
	float currentPrice;
	Item& item;

public:

	Buyer(float maxPossibleBid, Item& item);
	~Buyer();

	void setCurrentPrice(float currentPrice);
	void setItem(Item& item);
	void updatePrice(float currentPrice);
	void newBid(float newBid);

};

#endif
