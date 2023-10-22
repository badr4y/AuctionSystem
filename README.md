***Groupe 1 - Cpp***


## Système 

On a implémenté un système d'actuariat et de vente aux enchères qui permet grâce au modèle de conception Observer d'observer les mises à jour liée aux objets et de notifier les echérisseurs.

## Fonctionnalités

- Création et gestion d'objets aux enchères.
- Inscription/création de participants aux enchères (les enchérisseurs).
- Suivi des enchères grâce à l'Observer Pattern.

## Structure du Projet

- **Item.h** et **Item.cpp**    : classe `Item` représente un objet aux enchères.
- **Buyer.h** et **Buyer.cpp**  : classe `Buyer` représente un acheteur participant à une enchère (cet acheteur est lié à un unique Item).
- **Auction.h** et **IBuyer.h** : implémentation du modèle Observer.
- **main.cpp**                  : Programme principal pour illustrer ce modèle dans le cas de vente aux enchères.

## Utilisation

1. Cloner ce dépôt sur votre machine locale : 
	git clone https://github.com/votre_utilisateur/systeme-actuariat-vente-enchere.git
2. Compilation avec makefile : 
	make
3. Exécution du programme : 
	./main
