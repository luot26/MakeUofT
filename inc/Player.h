#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>

class Player {

protected:
    int pin_number;
    int score;

public:
    Player(int num);
    virtual void decision() = 0; 
    virtual void increment_score(int & val);
    int get_score();

    virtual void print_info()=0;
};

#endif 