// Card.hpp

#ifndef CARD_HPP
#define CARD_HPP

namespace Suit {
enum Enum {
    SPADE,
    HEART,
    CLUB,
    DIAMOND
};
};

class Card {
    private:
        Suit::Enum suit;
        int value;
    public:
        Card(Suit::Enum s, int val);

};

#endif