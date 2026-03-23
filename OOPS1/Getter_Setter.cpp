#include <iostream>
using namespace std;
class player
{
private:
    int score;
    int health;

public:
    // setter
    void set_score(int s)
    {
        score = s;
    }
    void set_health(int h)
    {
        health = h;
    }
    int get_score()
    {
        return score;
    }
    int get_health()
    {
        return health;
    }
};
int main()
{
    player drak;
    drak.set_score(100);
    drak.set_health(200);
    cout << drak.get_score() << " ";
    cout << drak.get_health();
}