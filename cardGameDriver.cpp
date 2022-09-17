/********************************************************************
* cardGameDriver.cpp
* Trevor Belk, Matthew Wilson, Iroda Narzullaeva
*
* This program plays Old Maid card game. It shuffles the deck
* and deals half of the deck to the first player and the other half 
* to the second player. After that, the player's cards are displayed 
* on the screen. Program finds matches, displays them and removes 
* them from hand.
*********************************************************************/

#include <iostream>
#include "game.h"

using namespace std;

int main()
{
  char again;                                       // if user wants to play again
  Game game;

  cout << "\nCARD GAME: OLD MAID\n";
  cout << "By: Iroda Narzullaeva, Mathew Wilson, and Lexi Toll\n\n";
  cout << "How to play:\nThe deck will be split evenly between the two players, "
       << "removing all Aces\nbut the Ace of Spades. The Ace of Spades is the "
       << "Old Maid, if you do not \nhave the Old Maid by the end of the game, " 
       << "You Win! If you do have the Old\nMaid at the end of the game, You Lose! " 
       << "You will get rid of cards by pulling\na card from the other player's " 
       << "hand, and finding a match of the same number\nand the same color - " 
       << "hearts and diamonds or clubs and spades.(colors not\nincluded in game," 
       << "please purchase separately)\n";

  do
  {
    game.playAGame();
    cout << "\nPlay another game (y/n)?: ";
    cin >> again;
    cout << '\n';
  } while (again == 'y');  // end do-while
} // end main
