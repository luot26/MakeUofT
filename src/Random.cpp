#include "Random.h"

Random::Random(int number) : Player(number){ }

bool Random::decision()
{
    //want 10% chance of cooperating
    int val= random(1,10);
    if (val==5)
    {
     return true;
    }
    else
    {
      return false;
    }
}

void Random::print_info()
{
    Serial.print("RANDOM\nScore is ");
    Serial.print(score);
    Serial.print('\n');
}
