#ifndef TITFORTAT_H
#define TITFORTAT_H
#include "Player.h"

class TitForTat : public Player
{
    private:
    bool mad; 

    public:
    TitForTat(int number);
    bool decision() override; 
    void increment_score(int & val);

    void print_info();
};

#endif
