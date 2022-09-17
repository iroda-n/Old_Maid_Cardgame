/**************************************************
* card.h
*
* Trevor Belk, Mathew Wilson, Iroda Narzullaeva
* Header file for a card class
*************************************************/

#if !defined(CARD_H)
#define CARD_H

const int JACK = 11, QUEEN = 12, KING = 13, ACE = 14;
const int SIZE = 52;                                      // # of cards in the deck
enum suitType {CLUBS, DIAMONDS, HEARTS, SPADES};          // card suits 

class Card
{
  public:
    Card();
    void assign(int n, suitType s);                       // assign values to card
    void display() const;                                 // display face value and suit
    int getNum() const;                                   // to access the face value 
    suitType getSuit() const;

  private:
    int num;                                              // cards' face value
    suitType suit;                                        // cards' suit
}; // end Card class
#endif
