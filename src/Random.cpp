class Random{
    private:

    int evenodd;
    int pin_number;
    int score;

    public:

    Random(int number)
    {
        pin_number=number;
        score=0;
    };

    void Decision(){
        
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