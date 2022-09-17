/**************************************************
* card.cpp
*
* Trevor Belk, Mathew Wilson, Iroda Narzullaeva
* Source file for a card class
*************************************************/

#include <iostream>
#include <iomanip> 
#include "card.h"
using namespace std;

Card::Card()
{ }

//******************************************************************************

// This member function assigned passed-in num and suit values
// to the cards

void Card::assign(int n, suitType s)
{
  num = n;
  suit = s;
} // end assign

//*****************************************************************************

// This member function accesses the num value of the card

int Card::getNum() const
{
  return num;
} // end getNum

//****************************************************************************

// This member function accesses the suit of the card

suitType Card::getSuit() const
{
  return suit;
} // end getSuit

//****************************************************************************

// This member function display the face value and the suit of the cards
// If num <= 10, display the number. Else, display K for King, A for Ace, 
// Q for Queen, J for Jack

void Card::display() const
{
  if (num <= 10)
  {
    cout << num;
  } // end if
  else
  {
    switch (num)
    {
      case JACK:
        cout << 'J';
        break;
      case QUEEN:
        cout << 'Q';
        break;
      case KING:
        cout << 'K';
        break;
      case ACE:
        cout << 'A';
        break;
      default:
        cout << " undefined ";
    } // end switch
  } // end else

  switch (suit)
  {
    case CLUBS:
      cout << 'C';                                        // C = Clubs
      break;
    case DIAMONDS:
      cout << 'D';                                        // D = Diamonds
      break;
    case HEARTS:
      cout << 'H';                                        // H = Hearts
      break;
    case SPADES:
      cout << 'S';                                        // S = Spades 
      break;
    default:
      cout << " undefined ";
  } // end switch
} //end display

//**********************************************************************
