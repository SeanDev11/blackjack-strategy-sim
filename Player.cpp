// Player.cpp

#include "Player.hpp"

Player::Player(int capital, int cardCount) 
: stake{capital}, unplayedCount{cardCount}
{}

int Player::hiLoIndex() {
    return (pointCount/unplayedCount);
}