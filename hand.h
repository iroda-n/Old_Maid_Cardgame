/**************************************************
* hand.h
*
* Trevor Belk, Mathew Wilson, Iroda Narzullaeva
* Header file for hand class
*************************************************/

#if !defined(HAND_H)
#define HAND_H

#include "groupOfCards.h"

class Hand : public GroupOfCards
{
  public:
    Hand();
    void addCard(const Card& card);                             // add card to the hand
    void findMatches();                                         // find matching cards
    void reset();                                               // reset hand to 0 cards
    Card getCard(int position);                                 // get card from the player's hand
    void remove(int position);                                  // remove the card from the hand
}; // end Hand class
#endif
