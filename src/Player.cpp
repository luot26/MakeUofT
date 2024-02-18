#include "Player.h"

Player::Player(int number) : pin_number(number), score(0) {}

void Player::increment_score(int & val) {
    score += val;
}

int Player::get_score() {
    return score;
}