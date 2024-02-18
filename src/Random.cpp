#include "Random.h"

Random::Random(int number) : Player(number){ }

void Random::decision()
{
    //gen random num
    int num = random_num(20);
    //if even, defect
    if (num % 2 == 0)
    {
        //be a dick
    }
    //if odd, cooperate
    else
    {
        //be nice
    }

}

int Random::random_num(int range)
    {  
    srand(time(NULL));
    int random= rand() %(range-2) +1;  //if input is 20, will range from 1-18
    //if input is 10, will range from 1 to 8
    return random;
} 

void Random::print_info()
{
    std::cout << "RANDOM" << std::endl << "Score is " << score << std::endl;
}

