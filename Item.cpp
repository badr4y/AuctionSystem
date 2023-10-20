#include "Item.h"
#include "Auction.h"
#include "IBuyer.h"


// Constructeur
Item::Item(float startPrice) {
    currentPrice = startPrice;
}

// Méthode pour mettre à jour le prix
void Item::updatePrice(float price) {
    currentPrice = price;
}

// Méthode pour obtenir le prix actuel
float Item::getCurrentPrice() const {
    return currentPrice;
}

