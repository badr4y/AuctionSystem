#ifndef AUCTION
#define AUCTION

#include "IBuyer.h"
#include <list>

class Auction {
private :
	std::list<IBuyer> buyers;
public : 
	void attach(IBuyer buyer);
	void detach(IBuyer buyer);
	void notify();
}
;

#endif
