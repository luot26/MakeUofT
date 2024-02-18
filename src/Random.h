#ifndef RANDOM_H
#define RANDOM_H
#include "Player.h"

class Random : public Player
{
    public:
    Random(int number);
    bool decision() override;
    void print_info();
};

#endif
