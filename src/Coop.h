#ifndef COOP_H
#define COOP_H
#include "Player.h"

class Coop : public Player
{
    public:
    Coop(int number);
    bool decision() override;
    void print_info();
};

#endif
