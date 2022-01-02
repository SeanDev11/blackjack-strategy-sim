// Deck.hpp

#ifndef DECK_HPP
#define DECK_HPP

#include "Card.hpp"

class Deck {

    private:
        Card *cards;
        int numCards;

    public:
        Deck(int amount);

        void shuffle();

        Card* getCards();

        int getNumCards();

};



#endif