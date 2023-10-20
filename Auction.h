#ifndef AUCTION
#define AUCTION

#include "ibuyer.h"
#include <list>

class Auction {
private :
	list<IBuyer> buyers;
public : 
	void attach(IBuyer buyer);
	void detach(IBuyer buyer);
	void notify();
}
;

#endif
