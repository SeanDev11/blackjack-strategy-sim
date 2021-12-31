// Player.cpp

#include "PLAYER.HPP"

Player::Player() {}

int Player::hiLoIndex() {
    return (pointCount/unplayedCount);
}