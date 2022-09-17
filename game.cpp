/**************************************************
* game.cpp
*
* Trevor Belk, Mathew Wilson, Iroda Narzullaeva
* Source file for game class
*************************************************/

#include <iostream>
#include <cstdlib> 
#include <cmath>
#include <ctime>
#include "game.h"

using namespace std;

// This member function plays a game. It shuffles the deck, deals
// cards to players, displays the cards of the first player, removes the 
// matching cards and displays what cards were removed. After the game is played, 
// it restores the deck to 52 cards and hands to 0 so that user can play again.

void Game::playAGame()
{
  int firstRandom;
  deck.shuffle();

  while (deck.getCurrentSize() != 0)
  {
    player1.addCard(deck.dealCard());
    player2.addCard(deck.dealCard());
  } // end while

  cout << "\n\nEnter your name: ";
  cin >> name;
  cout << '\n' << name << "'s initial hand" << endl;
  player1.display();
  cout << endl;
  cout << '\n' << name << "'s matches " << endl;
  player1.findMatches();
  cout << "\nComputer's matches " << endl;
  player2.findMatches();

  cout << '\n' << name << "'s Hand:\n";
  player1.display();
  cout << "\n";

  do
  {
    cout << "\nEnter the number between 1 and " << player2.getCurrentSize() << ": ";
    cin >> userInput;

    while (!cin.good() || userInput > player2.getCurrentSize() || userInput < 0)
    {
      cin.clear();
      cin.ignore(256, '\n');
      cout << "Invalid entry! Please, human, enter the right number between 1 and " << player2.getCurrentSize() << ": ";
      cin >> userInput;
    } // end while

    player1.addCard(player2.getCard(userInput - 1));
    player2.remove(userInput - 1);
    cout << name << "'s Matches Found: if none, no matches found:\n";
    player1.findMatches();
    cout << endl;
    cout << name << "'s hand:\n";
    player1.display();
    cout << endl;
   
    if (player1.getCurrentSize() != 0 && player2.getCurrentSize() != 0)
    {
      srand(static_cast<unsigned int>(time(NULL)));
      firstRandom = rand() % player1.getCurrentSize();

      player2.addCard(player1.getCard(firstRandom));
      cout << "\nComputer picked ";
      player1.getCard(firstRandom).display();
      cout << endl;
      player1.remove(firstRandom);
      cout << "Computer's Found Match: if none shown, no match found:\n";
      player2.findMatches();
      cout << endl;
   } // end if
  } while (player1.getCurrentSize() != 0 && player2.getCurrentSize() != 0); 

  if (player1.getCurrentSize() > 0)
  {
    cout << "\nYou are an Old Maid. LOOOOOOOOOSEEEEEEEERRRRRR!!!!!!!" << endl;
  } // end if
  else
  {
    cout << "\nYOU WIN!" << endl;;
  } // end else

  deck.reset();
  player1.reset();
  player2.reset();
} // end playAGame

