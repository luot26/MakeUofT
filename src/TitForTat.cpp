#include "TitForTat.h"

TitForTat::TitForTat(int number)    
{
    mad=false;
    pin_number=number;
    score=0;
}
void TitForTat::decision()
{
    if(!mad) //if not mad
    {
        // trust otherperson
    }
    else //mad
    {
        // retaliate
        // set mad= to false
    }
}
void TitForTat::increment_score(int val)
{
    score+=val;    
}

int TitForTat::get_score()
{
    return score;
}