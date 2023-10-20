#include <iostream>
#include "Item.h"
#include "Buyer.h"

int main() {
    Item item1(12.0); // Objet "item1" created with an initial price of 12€

    std::cout << "Prix actuel : " << item1.getCurrentPrice() << std::endl;

    item1.updatePrice(15.0); //the price of "item1" updated 
    std::cout << "Nouveau prix : " << item1.getCurrentPrice() << std::endl;

    return 0;
}

