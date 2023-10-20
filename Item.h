#ifndef ITEM_H
#define ITEM_H

class Item :public Auction {
public:
    // Constructeur
    Item(float startPrice);

    // Méthode pour mettre à jour le prix
    void updatePrice(float price);

    // Méthode pour obtenir le prix actuel
    float getCurrentPrice() const;

private:
    float currentPrice;
};

#endif // ITEM_H

