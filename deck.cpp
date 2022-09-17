/**************************************************
* deck.cpp
*
* Trevor Belk, Mathew Wilson, Iroda Narzullaeva
* Source file for deck class
*************************************************/

#include <cstdlib> 
#include <cmath>
#include <ctime>
#include <iostream>
#include "deck.h"
using namespace std;

// Default constructor of Deck. It initializes the current size of deck
// and assign the cards array with 52 cards

Deck::Deck()
{
  currentSize = SIZE;

  /* Iroda's way of assigning
  * for (int i = 0; i < SIZE; i++)
  * {
  *   cards[i].assign(2 + i % 13, static_cast<suitType>(i / 13));
  * }
  */

  int k = 0;
  for (int i=2; i<15; i++)
  {
    for (int j=0; j<4; j++)
    {
      cards[k].assign(i, static_cast<suitType>(j));
      k++;
    } // end for
  } // end for

  cards[SIZE - 4].assign(ACE, SPADES);
  cards[SIZE - 3].assign(ACE, HEARTS);
  cards[SIZE - 2].assign(ACE, CLUBS);
  cards[SIZE - 1].assign(ACE, DIAMONDS);
} // end Deck constructor

//**********************************************************************

// This member function shuffles the deck by assigning the cards to 
// the randomly chosen positions

void Deck::shuffle()
{
  srand(static_cast<unsigned int>(time(NULL)));
  Card temp[SIZE];
  
  for (int i = SIZE - 4; i >= 0; i--)
  {
    int j = rand() % (i + 1);
    swap(cards[i], cards[j]);
  } // end for 
} // end shuffle

//************************************************************************

// This member function deals cards to the players. When the card is dealt
// from deck, the currentSize changes

Card Deck::dealCard()
{
  currentSize--;
  return cards[currentSize];
} // end dealCard

//***********************************************************************

// This member function resets decks to 52 cards

void Deck::reset()
{
  currentSize = SIZE;
} // end reset
