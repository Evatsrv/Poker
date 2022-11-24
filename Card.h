#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Card
{
public:
    Card();
    int getCard();
    void setCard(int);
    void displayCard(Card);
protected:
    int value;
    int suit;
    int cardID;
};

#endif