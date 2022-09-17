/**************************************************
* groupOfCards.cpp
*
* Trevor Belk, Mathew Wilson, Iroda Narzullaeva
* Header file for group of cards class
*************************************************/

#if !defined(GROUPOFCARDS_H)
#define GROUPOFCARDS_H
#include "card.h"

class GroupOfCards
{
  public:
    GroupOfCards();
    void display() const;
    int getCurrentSize() const;

  protected:
    Card cards[SIZE];                                     // array of Card objects
    int currentSize;                                      // keeps track of cards array size 
}; // end GroupOfCards class
#endif