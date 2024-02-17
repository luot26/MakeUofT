#ifndef PLAYER_H
#define PLAYER_H

class Player {

protected:
    int pin_number;
    int score;

public:
    Player(int num);
    virtual void decision() = 0; 
    virtual void increment_score(int val);
    int get_score();
};

#endif 