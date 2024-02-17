#ifndef PLAYER_H
#define PLAYER_H

class Player {

protected:
    int pin_number;
    int score;

public:
    Player(int number);
    virtual void decision() = 0; 
    void increment_score(int val);
    int get_score();
};

#endif 