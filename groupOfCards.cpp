/**************************************************
* groupOfCards.cpp
*
* Trevor Belk, Mathew Wilson, Iroda Narzullaeva
* Source file for group of cards class
*************************************************/

#include <iostream>
#include "groupOfCards.h""
using namespace std;

GroupOfCards::GroupOfCards()
{ }

// This member function displays all cards in GroupOfCards object

void GroupOfCards::display() const
{
  for (int i=0; i<currentSize; i++)
  {
    cards[i].display();
    cout << " ";
  } // end for
} // end display

//********************************************************************

// This member function gets the current size

int GroupOfCards::getCurrentSize() const
{
  return currentSize;
} // end getCurrentSize
