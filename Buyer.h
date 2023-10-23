#ifndef BUYER
#define BUYER

#include "Item.h"
#include "IBuyer.h"
#include <ctime>

class Item;

class Buyer : public IBuyer {

private:
	float maxPossibleBid;
	float currentPrice;
	Item* item;

public:
	void updatePrice(float newPrice) override;

	Buyer(float maxPossibleBid, Item* item);
	virtual ~Buyer();

	void setCurrentPrice(float currentPrice);

	void setItem(Item* item);
	void newBid(float newBid, time_t bidTime);


};

#endif
