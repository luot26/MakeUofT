#include "Grudge.h"

Grudge::Grudge(int number)
{
    holding_grudge= false;
    pin_number= number;
    score=0;    
}

void Grudge::decision()
{
    if( !holding_grudge)
    {
        //be nice
    }
    else
    {
        //retalliate
    }
}

void Grudge::increment_score(int val)
{
    score+=val;
}

int Grudge::get_score()
{
    return score;
}