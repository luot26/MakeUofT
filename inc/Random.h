#ifndef RANDOM_H
#define RANDOM_H
#include "Player.h"

class Random : public Player
{
    public:
    Random(int number);
    void decision() override;
};

#endif