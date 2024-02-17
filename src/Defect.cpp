#include "Defect.h"
Defect::Defect(int number)
    {
        pin_number=number;
        score=0;
    };

void Defect::Decision()
    {
        //fuck em over
    }
void Defect::increment_score(int val)
{
    score+=val;  
}
int Defect::get_score()
    {
        return score;
    }