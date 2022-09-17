/**************************************************
* deck.h
*
* Trevor Belk, Mathew Wilson, Iroda Narzullaeva
* Header file for deck class
*************************************************/

#if !defined(DECK_H)
#define DECK_H

#include "groupOfCards.h"

class Deck : public GroupOfCards
{
  public:
    Deck();
    void shuffle();                                     // shuffle deck
    Card dealCard();                                    // deal cards to players
    void reset();                                       // reset the deck
}; // end Deck class
#endif
