#ifndef GRUDGE_H
#define GRUDGE_H
#include "Player.h"


class Grudge : public Player
{
    private:
    bool holding_grudge;

    public:
    Grudge(int number);
    void decision() override;
    void print_info();
    
};

#endif