#include <iostream>
#include "Item.h"
#include "Buyer.h"
#include <chrono>
#include <thread>

int main() {
    Item* item1 = new Item(12); 

    std::cout << "Prix actuel : " << item1->getCurrentPrice() << std::endl;

    Buyer* buyer1 = new Buyer(20, item1);
    Buyer* buyer2 = new Buyer(21, item1);
    item1->attach(buyer1);
    item1->attach(buyer2);
    buyer1->newBid(15, time(nullptr));
    item1->notify();

    // Sleep for 3 seconds
    std::this_thread::sleep_for(std::chrono::seconds(3));

    buyer2->newBid(21, time(nullptr));
    item1->notify();

    std::cout << "Nouveau prix : " << item1->getCurrentPrice() << std::endl;
    delete item1;
    delete buyer1;
    delete buyer2;

    return 0;
}


