#ifndef AUCTION
#define AUCTION

#include "IBuyer.h"
#include "Buyer.h"
#include <list>

class Buyer;

class Auction {

public : 
	virtual void attach(Buyer* buyer)=0;
	virtual void detach(Buyer* buyer)=0;
	virtual void notify()=0;
}
;

#endif
