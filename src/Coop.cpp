class Coop{
    private:
    int pin_number;
    int score;

    public:

    Coop(int number)
    {
        pin_number=number;
        score=0;
    };

    void Decision(){
        //be nice
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