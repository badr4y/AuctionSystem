#ifndef BUYER
#define BUYER

#include "IBuyer.h"
#include "Item.h"

class Buyer : public IBuyer {

private:
	float maxPossibleBid;
	float currentPrice;
	Item item;

public:

	Buyer(float maxPossibleBid);
	~Buyer();

	void setItem(Item item);
	void updatePrice(float currentPrice);
	void newBid(float newBid);

};

#endif