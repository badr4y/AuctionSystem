#include <iostream>
#include "Item.h"

int main() {
    Item item(12.0); // Objet "Item" créé avec un prix initial de 12€

    std::cout << "Prix actuel : " << item.getCurrentPrice() << std::endl;

    item.updatePrice(15.0); // Met à jour le prix
    std::cout << "Nouveau prix : " << item.getCurrentPrice() << std::endl;

    return 0;
}

