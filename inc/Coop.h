#ifndef COOP_H
#define COOP_H
#include "Player.h"

class Coop : public Player
{
    public:
    Coop(int number);
    void decision() override;
    void print_info();
};

#endif