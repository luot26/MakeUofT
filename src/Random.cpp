#include "Random.h"

    Random::Random(int number)
    {
        pin_number=number;
        score=0;
    };

    void Random::decision(){
        
    }
    void Random::increment_score(int val)
    {
        score+=val;
    }
    int Random::get_score()
    {
        return score;
    }