class Defect{
    private:

    int pin_number;
    int score;

    public:

    Defect(int number)
    {
        pin_number=number;
        score=0;
    };

    void Decision(){
        //fuck em over
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