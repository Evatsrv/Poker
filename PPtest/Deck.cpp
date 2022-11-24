#include "Deck.h"

Deck::Deck()
{
    deckTop=0;
    for(int i=deckTop; i < 52; i++)
        aDeckOfCards[i].setCard(i);	 // pass a unique value to setCard

}

void Deck::shuffleDeck()
{
    cout << "\nDeck after shuffling: " << endl << endl;
    for (int i = 0; i < 100; i++)
    {
        int index1 = rand()%52;
        int index2 = rand()%52;
        swapCards(index1, index2);
    }
}

void Deck::displayDeck()
{
    for (int i = deckTop; i < 52; i++)
    {
        Card j = aDeckOfCards[i];
        displayCard(j);
    }

}

int Deck::dealCard()
{
    if (deckTop < 51)
    {
        deckTop++;
    }

    else
    {
        shuffleDeck();
        deckTop = 1;
        dealCard();
    }

    return aDeckOfCards[deckTop-1].getCard();
}

void Deck::swapCards(int first, int second)
{
    Card temp = aDeckOfCards[first];
    aDeckOfCards[first] = aDeckOfCards[second];
    aDeckOfCards[second] = temp;
}

ostream& operator <<(ostream& out, const Card& c)
{
    out << c;
    return out;
}