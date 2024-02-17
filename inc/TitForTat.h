class TitForTat
{

    private:

    bool mad;
    int pin_number;
    int score;
    public:
    
     TitForTat(int number);
     void decision();
     void increment_score(int val);
     int get_score();
};