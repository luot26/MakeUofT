
class Grudge
{
    private:
    bool holding_grudge;
    int score;
    int pin_number;

    Grudge(int number)
    {
        holding_grudge= false;
        pin_number= number;
        score=0;
    }
    void decision()
    {
        if( !holding_grudge)
        {
            //be nice
        }
        else
        {
            //retalliate
        }
    }
    void increment_score(int val)
    {
        score+=val;
    }
    int get_score()
    {
        return score;
    }

    



};