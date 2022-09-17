/**************************************************
* hand.cpp
*
* Trevor Belk, Mathew Wilson, Iroda Narzullaeva
* Source file for hand class
*************************************************/

#include <cstdlib> 
#include <cmath>
#include <ctime>
#include <iostream>
#include "hand.h"

using namespace std;

// The default constructor of Hand. It initializes the current number
// of cards in player's hand to 0 

Hand::Hand()
  : GroupOfCards()
{
  currentSize = 0;
} // end Hand

//*********************************************************************

// This member function adds a card to player's hand

void Hand::addCard(const Card& card)
{
  cards[currentSize] = card;

  // If the card is ace of hearts, diamonds, or clubs, remove it from the hand
  if (cards[currentSize].getNum() == ACE && (cards[currentSize].getSuit() == HEARTS
    || cards[currentSize].getSuit() == DIAMONDS || cards[currentSize].getSuit() == CLUBS))
  {
    currentSize--;
  } // end if

  currentSize++;
} // end addCard

//*********************************************************************

// This member function loops through the player's hand and compares 
// cards. If the num value and color of suit (clubs and spades, 
// diamonds and hearts) of two cards match, the cards are swapped with 
// the last two cards and are removed from the hand.

void Hand::findMatches()
{
  for (int i=0; i<currentSize; i++)
  {
    for (int j=0; j<currentSize; j++)
    {
      if (cards[i].getNum() == cards[j].getNum() && ((cards[i].getSuit() == SPADES && cards[j].getSuit() == CLUBS)
        || (cards[i].getSuit() == DIAMONDS && cards[j].getSuit() == HEARTS)
        || (cards[i].getSuit() == CLUBS && cards[j].getSuit() == SPADES)
        || (cards[i].getSuit() == HEARTS && cards[j].getSuit() == DIAMONDS)))
      {
        int latter, former;
        
        if (i < j) 
        {
          latter = j;
          former = i;
        } // end if
        else
        {
          latter = i;
          former = j;
        } // end else

        cards[i].display();
        cout << " ";
        cards[j].display();
        cout << endl;

        if (latter != currentSize - 1)
        {
          swap(cards[latter], cards[currentSize - 1]);
        } // end if
        currentSize--;
        if (former != currentSize - 1)
        {
          swap(cards[former], cards[currentSize - 1]);
        } // end if
        currentSize--;

        i = 0;
        j = 0;
      } // end if
    } // end for
  } // end for
} // end findMatches

//*********************************************************************

// This member function resets hand so that it contains 0 cards

void Hand::reset()
{
  currentSize = 0;
} // end reset

//*********************************************************************

// This member function returns the card from the other player's 
// hand from the position specified by player 

Card Hand::getCard(int position)
{
  return cards[position];
} // end getCard

//*********************************************************************

// This member function removes the card that was picked by other player
// from the player's hand. It ensures that we don't have two same cards

void Hand::remove(int position)
{
  swap(cards[position], cards[currentSize - 1]);
  currentSize--;
} // end remove

