class TitForTat
{

    private:

    bool mad;
    int pin_number;
    int score;
    public:

    TitForTat(int number)
    {
        mad=false;
        pin_number=number;
        score=0;
    };

    void decision()
    {
        if(!mad) //if not mad
        {
        // trust otherperson
        }
        else //mad
        {
            // fuck over other person
            // set mad= to false
        }
    };
    void increment_score(int val)
    {
        score+=val;
    }

    int get_score()
    {
        return score;
    }

};

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
            //fuck em over
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