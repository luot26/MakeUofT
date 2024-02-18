#ifndef DEFECT_H
#define DEFECT_H
#include "Player.h"

class Defect : public Player
{
    public:
    Defect(int number);
    bool decision() override;
    void print_info();
};


#endif
