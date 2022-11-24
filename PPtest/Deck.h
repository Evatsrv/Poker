#ifndef DECK_H
#define DECK_H

#include "card.h"

using namespace std;

class Deck : public Card
{
    friend ostream& operator <<(ostream&, const Card&);
public:
    Deck();
    void shuffleDeck();
    void displayDeck();
    int dealCard();
    void swapCards(int,int);
protected:
    Card aDeckOfCards[52]; // create a deck 52 cards
    int deckTop;
};

#endif