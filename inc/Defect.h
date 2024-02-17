class Defect
{
    private:

    int pin_number;
    int score;

    public:

    Defect(int number);
    void Decision();
    void increment_score(int val);
    int get_score();
};
