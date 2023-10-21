#ifndef AUCTION
#define AUCTION

#include "IBuyer.h"
#include "Buyer.h"
#include <list>

class Buyer;

class Auction {
private :
	std::list<Buyer*> buyers;
public : 
	virtual void attach(Buyer* buyer);
	virtual void detach(Buyer* buyer);
	virtual void notify();
}
;

#endif
