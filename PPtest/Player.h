#ifndef PLAYER_H
#define PLAYER_H

#include "card.h"
#include "deck.h"

class Player: public Deck
{
public:
    Player();
    void showHand();
    void addCard(int);
    void showCard(int);
    void deleteCard();
private:
    Card aHand[5];
    int currentCard;
};

#endif