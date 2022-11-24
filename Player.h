#ifndef PLAYER_H
#define PLAYER_H

#include "card.h"


class Player
{
public:
    Player();
    void showHand();
    void showCard(int);
    void deleteCard();
private:
    Card aHand[5];
    int currentCard;
};

#endif