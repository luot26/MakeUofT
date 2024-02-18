#include "Defect.h"

Defect::Defect(int number) : Player(number){ }

void Defect::decision()
{
        //fuck em over
}

void Defect::print_info()
{
    std::cout << "DEFECT" << std::endl << "Score is " << score << std::endl;
}
