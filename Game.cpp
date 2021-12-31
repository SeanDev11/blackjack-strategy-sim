// Game.cpp

#include "Game.hpp"

// Initialise Dealer and appropriate number of decks
Game::Game(Player *player, Deck *deck) 
: players{player}, decks{deck}
{
    dealer = new Dealer();
}

void Game::startPlay() {

}

void Game::endPlay() {
    
}