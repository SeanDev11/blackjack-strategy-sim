// main.cpp

#include <iostream>

#include "Game.hpp"
#include "Playground.hpp"

int main() {

    std::cout << "Running..." << std::endl;
    
    Deck *deck = new Deck(1);


    Card* c = (*deck).getCards();

    for (int i = 0; i < (*deck).getNumCards(); i++) {
        std::cout << std::string(c[i]) << std::endl;
    }
    deck->shuffle();
    Card* ca = deck->getCards();
    std::cout << "SHUFFLING...................." << std::endl;
    for (int i = 0; i < (*deck).getNumCards(); i++) {
        std::cout << std::string(ca[i]) << std::endl;
    }

    std::cout << "Finished" << std::endl;
    return 0;

}