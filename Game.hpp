// Game.hpp


#ifndef GAME_HPP
#define GAME_HPP

#include "Dealer.hpp"
#include "Player.hpp"
#include "Deck.hpp"

class Game {
    private:
        Dealer *dealer;
        Player *players;
        Deck *decks;

    public:
        Game(Player *player, Deck *deck);
        void startPlay();
        void endPlay();

};





#endif