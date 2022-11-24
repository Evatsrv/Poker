#include "Card.h"

Card::Card() : value(0), suit(0), cardID(0)
{}

int Card::getCard()
{
    return cardID;
}

void Card::setCard(int newID)
{
    if (newID >= 0 && newID < 52)
    {
        cardID = newID;
        value = cardID%13;
        suit = cardID/13;
    }
    else
    {
        cardID = 0;
        value = 0;
        suit = 0;
    }
}

void Card::displayCard(Card ID)
{
    string Suits[] = {"PIQUE", "COEUR", "CARREAUX", "TREFLE"};
    string Values[] = { "UN", "DEUX", "TROIS", "QUATRE", "CINQ", "SIX", "SEPT",
                        "HUIT", "NEUF", "DIX", "VALET", "REINE", "ROI"};

    cout << Values[ID.value] << " of " << Suits[ID.suit] << endl;
}