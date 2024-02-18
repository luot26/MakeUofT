#include "TitForTat.h"

TitForTat::TitForTat(int number) : Player(number)
{
    mad=false;
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

void TitForTat::increment_score(int & val)
{
    score+=val;
    if (val !=3 && mad==false)
    {
        mad=true;
    }
}

void TitForTat::print_info()
{
     std::cout << "TIT FOR TAT" << std::endl <<"Mad = " << mad
    << ", Score is " << score << std::endl;
}
