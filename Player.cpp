#include "Player.h"


const int HAND_SIZE = 5;




void Player::deleteCard()
{

}

void Player::showCard(int id)
{
    Card j = aHand[id];
    displayCard(j);
}

void Player::showHand()
{
    for (int i = 0; i < HAND_SIZE; i++)
        showCard(i);
}