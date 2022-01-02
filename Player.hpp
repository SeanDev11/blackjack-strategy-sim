// Player.hpp

#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player {
    private:
        int stake;          // capital available to player
        int unplayedCount;  // decreases by 1 everytime the player sees a card
        int pointCount = 0;     // updated as player sees cards. +1 for low cards, -1 for high cards
        int lowCards[6] = {2,3,4,5,6,7};    // 2,3,4,5,6,7
        int highCards[6] = {9,10,11};   // 9,10,J,Q,K,A
        
    public:
        Player(int capital, int cardCount);
        int hiLoIndex();

};


#endif