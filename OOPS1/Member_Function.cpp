#include <iostream>
using namespace std;
class player
{
public:
    int score;
    int health;
    void show_health()
    {
        cout << "health is: " << health;
    }
};
int main()
{
    player DRAK;
    DRAK.score = 100;
    DRAK.health = 100;
    cout << DRAK.score << " " << endl;

    player CR7;
    CR7.score = 500;
    CR7.health = 200;
    cout << CR7.score << " " << endl;
    DRAK.show_health();
    cout << endl;
    CR7.show_health();
}