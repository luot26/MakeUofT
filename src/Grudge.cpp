#include "Grudge.h"

Grudge::Grudge(int number) : Player(number)
{
    holding_grudge= false;
}

bool Grudge::decision()
{
    if( !holding_grudge)
    {
    return true;
    }
    else
    {
      return false;
        //retalliate
    }
}

void Grudge::print_info()
{
  Serial.print("GRUDGE\nScore is ");
  Serial.print(score);
  Serial.print('\n');
  Serial.print("Holding Grudge: ");
  Serial.print(holding_grudge);
  Serial.print('\n');
}
