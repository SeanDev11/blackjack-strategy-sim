// Game.hpp


#ifndef GAME_HPP
#define GAME_HPP

#include "Deck.hpp"
#include "Player.hpp"
#include "Dealer.hpp"



class Game {
    private:
        Dealer dealer;
        Player *players;
        Deck *deck;

    public:
        Game(Player *player, Deck *deck);
        void startPlay();
        void endPlay();

};





#endif