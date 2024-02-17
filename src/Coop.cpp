#include "Coop.h"

Coop::Coop(int number)
    {
        pin_number=number;
        score=0;
    };

void Coop::decision(){
        //be nice
}

void Coop::increment_score(int val)
    {
        score+=val;
    }

int Coop::get_score()
    {
        return score;
    }
