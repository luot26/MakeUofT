#ifndef TITFORTAT_H
#define TITFORTAT_H
#include "Player.h"

class TitForTat : public Player
{
    private:
    bool mad; 

    public:
    TitForTat(int number);
    void decision() override; 
    void increment_score(int & val);

    void print_info();
};

#endif