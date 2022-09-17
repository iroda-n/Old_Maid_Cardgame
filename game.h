/**************************************************
* game.h
*
* Trevor Belk, Mathew Wilson, Iroda Narzullaeva
* Header file for game class
*************************************************/

#if !defined(GAME_H)
#define GAME_H

#include "deck.h"
#include "hand.h"
#include <string>

using namespace std;

class Game
{
  public:
    void playAGame();                               // play a game

  private:
    Deck deck;
    Hand player1;
    Hand player2;
    int userInput;                                  // player's choice of card
    string name;                                    // player's name
}; // end Game class
#endif
