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

void Grudge::print_info()
{
    std::cout << "GRUDGE" << std::endl <<"Holding Grudge = " << holding_grudge
    << ", Score is " << score << std::endl;
}