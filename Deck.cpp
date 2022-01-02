// Deck.cpp

#include "Deck.hpp"
#include "Card.hpp"
#include <iostream>

Deck::Deck(int amount) 
: numCards{amount*52}
{
    // Deck consists of 13 cards for each of the 4 suits
    
    cards = new Card[amount*52];
    int val = 0;
    //cards = new Card[amount*52];
    for (int j = 0; j < amount; j++) {
        for (int i = 0; i < 13; i++) {
            if (i < 8) {
                val = i+2;
            } else if (i < 12) {
                val = 10;
            } else {
                val = 11;
            }
            cards[(i*4)].setState(Suit::SPADE, val);
            cards[(i*4)+1].setState(Suit::HEART, val);
            cards[(i*4)+2].setState(Suit::CLUB, val);
            cards[(i*4)+3].setState(Suit::DIAMOND, val);
        }
    }
}

void Deck::shuffle() {
    std::cout << "-------------------------------" << std::endl;
    // 1,2,3,4  5,6,7,8
    // Shuffling is done by repeatedly splitting the deck in half and then merging both halfs.
    // Similar to the technique Las Vegas dealers use, bar the "washing" of the deck.
    Card *shuffledCards = new Card[numCards];
    for (int j = 0; j < 10; j++) {
        for (int i = 0; i < (numCards/2); i++) {
            shuffledCards[i*2] = cards[i];
            shuffledCards[(i*2)+1] = cards[(numCards/2)+i];
        }
        //delete [] cards;
        cards = shuffledCards;
        for (int k = 0; k < numCards; k++) {
            std::cout << std::string(cards[k]) << std::endl;
        }
    }
    delete [] shuffledCards;
}

int Deck::getNumCards() {
    return numCards;
}

Card* Deck::getCards() {
    return cards;
}





