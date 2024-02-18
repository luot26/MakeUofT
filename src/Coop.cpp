#include "Coop.h"

Coop::Coop(int number) : Player(number){ }

void Coop::decision(){
        //be nice
}

void Coop::print_info()
{
        std::cout << "COOPERATIVE" << std::endl << "Score is " << score << std::endl;
}

