#include <iostream>
using namespace std;
class player
{
public:
    int score;
    string name;

private:
    int health = 100;
};
int main()
{
    player DRAK;
    DRAK.score = 100;
    // DRAK.health = 100;
    cout << DRAK.score << " " << endl;

    player CR7;
    CR7.score = 500;
    // CR7.health = 100;
    cout << CR7.score << " ";
}