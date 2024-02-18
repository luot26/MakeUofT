#include "Defect.h"

Defect::Defect(int number) : Player(number){ }

bool Defect::decision()
{
  return false;
  
}

void Defect::print_info()
{
  Serial.print("DEFECT\nScore is ");
  Serial.print(score);
  Serial.print('\n');
    
}
