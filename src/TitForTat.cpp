#include "TitForTat.h"

TitForTat::TitForTat(int number) : Player(number)
{
    mad=false;
}
bool TitForTat::decision()
{
    if(!mad) //if not mad
    {
        return true;
    }
    else
    {
        return false;
        mad=false;
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
  Serial.print("TIT FOR TAT\nScore is ");
  Serial.print(score);
  Serial.print('\n');
  Serial.print("Mad = ");
  Serial.print(mad);
  Serial.print('\n');
}
