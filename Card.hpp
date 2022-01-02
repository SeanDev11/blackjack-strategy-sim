// Card.hpp

#ifndef CARD_HPP
#define CARD_HPP

#include <string>

namespace Suit {
enum Enum {
    SPADE,  // 0
    HEART,  // 1
    CLUB,   // 2
    DIAMOND // 3
};
};

class Card {
    private:
        Suit::Enum suit;
        int value;
    public:
        Card(Suit::Enum s, int val);
        Card();

        operator std::string() const;

        int getValue();
        Suit::Enum getSuit();

        void setState(Suit::Enum s, int val);
        void setValue(int val);
        void setSuit(Suit::Enum s);


};

#endif