// Deck.cpp

#include "Deck.hpp"
#include "Card.hpp"

Deck::Deck(int amount) {
    // Deck consists of 13 cards for each of the 4 suits
    int val;
    for (int i = 0; i < 13; i++) {
        if (i < 8) {
            val = i+2;
        } else if (i < 12) {
            val = 10;
        } else {
            val = 11;
        }
        cards[i] = new Card(Suit::CLUB, val);
        cards[i+1] = new Card(Suit::DIAMOND, val);
        cards[i+2] = new Card(Suit::SPADE, val);
        cards[i+3] = new Card(Suit::HEART, val);
    }

};