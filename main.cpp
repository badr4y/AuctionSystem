#include <iostream>
#include "Item.h"
#include "Buyer.h"

int main() {
    Item* item1 = new Item(12); // Objet "item1" created with an initial price of 12€

    std::cout << "Prix actuel : " << item1->getCurrentPrice() << std::endl;

    Buyer* buyer1 = new Buyer(20, item1);
    Buyer* buyer2 = new Buyer(21, item1);
    item1->attach(buyer1);
    item1->attach(buyer2);
    buyer1->newBid(15);
    item1->notify();
    buyer2->newBid(21);
    item1->notify();
    item1->detach(buyer1);
    
    std::cout << "Nouveau prix : " << item1->getCurrentPrice() << std::endl;
    delete item1;
    delete buyer1;
    delete buyer2;

}

