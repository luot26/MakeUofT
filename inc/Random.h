class Random
{
    private:
    
    int score;
    int pin_number;

    public:

    Random(int number);
    void decision();
    void increment_score(int val);
    int get_score();
};