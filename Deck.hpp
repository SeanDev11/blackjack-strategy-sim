// Deck.hpp

#ifndef DECK_HPP
#define DECK_HPP

#include "Card.hpp"

class Deck {

    private:
        Card *cards[52];

    public:
        Deck(int amount);

};



#endif