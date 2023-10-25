#include <iostream>
#include "Item.h"
#include "Buyer.h"
#include <chrono>
#include <thread>

int main() {
    Item* item1 = new Item(12); 
    std::cout << "Prix actuel (1) : " << item1->getCurrentPrice() << std::endl;

    Buyer* buyer1 = new Buyer(20, item1);
    Buyer* buyer2 = new Buyer(21, item1);
    item1->attach(buyer1);
    item1->attach(buyer2);

    buyer1->newBid(15, time(nullptr));
    std::cout << "Prix actuel (2) : " << item1->getCurrentPrice() << std::endl;
    
    buyer2->newBid(14, time(nullptr));
    std::cout << "Prix actuel (3) : " << item1->getCurrentPrice() << std::endl;

    // Sleep for 3 seconds
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "Prix final : " << item1->getCurrentPrice() << std::endl;

    buyer2->newBid(21, time(nullptr));
    std::cout << "Prix actuel (4) : " << item1->getCurrentPrice() << std::endl;

    delete item1;
    delete buyer1;
    delete buyer2;

    return 0;
}


