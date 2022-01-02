// Card.cpp

#include "Card.hpp"

Card::Card(Suit::Enum s, int val)
: suit{s}, value{val}
{}

Card::Card() {}


int Card::getValue() {
    return value;
}

Suit::Enum Card::getSuit() {
    return suit;
}

void Card::setState(Suit::Enum s, int val) {
    suit = s;
    value = val;
}

void Card::setValue(int val) {
    value = val;
}

void Card::setSuit(Suit::Enum s) {
    suit = s;
}

Card::operator std::string() const {
    std::string suitStr;
    switch (suit) {
        case Suit::SPADE:
            suitStr = "SPADE";
            break;
        case Suit::DIAMOND:
            suitStr = "DIAMOND";
            break;
        case Suit::CLUB:
            suitStr = "CLUB";
            break;
        case Suit::HEART:
            suitStr = "HEART";
            break;
    }
    return suitStr + " " + std::to_string(value);
}