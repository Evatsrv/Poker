#include "Card.h"
#include "Deck.h"
#include "Player.h"

int main()
{
    Deck d;
    d.shuffleDeck();
    d.displayDeck();

    cout << "\n\nPlayer1's hand is: " << endl;
    Player player1;
    player1.showHand();
    system("PAUSE");
    return 0;
}