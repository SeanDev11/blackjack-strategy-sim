// Game.hpp


#ifndef GAME_HPP
#define GAME_HPP

#include "Dealer.hpp"
#include "Player.hpp"
#include "Deck.hpp"

class Game {
    private:
        Dealer dealer;
        Player players[7];
        Deck decks[4];

    public:
        Game();


};





#endif