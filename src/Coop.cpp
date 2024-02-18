 #include "Coop.h"

Coop::Coop(int number) : Player(number){ }

bool Coop::decision()
{
  return true;
        //be nice, cooperate
}

void Coop::print_info()
{
  Serial.print("COOPERATIVE\nScore is ");
  Serial.print(score);
  Serial.print('\n');
}
