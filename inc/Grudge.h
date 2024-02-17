class Grudge
{
    private:
    
    bool holding_grudge;
    int score;
    int pin_number;

    public:

    Grudge(int number);
    void decision();
    void increment_score(int val);
    int get_score();
};