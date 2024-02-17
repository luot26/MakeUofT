#include "Grudge.h"

Grudge::Grudge(int number) : Player(number)
{
    holding_grudge= false;
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