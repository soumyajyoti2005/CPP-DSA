#include <iostream>
#include <string>
using namespace std;
class player
{
private:
    string name;
    int health;
    bool alive;
    int kill;

public:
    void set_name(string name)
    {
        this->name = name;
    }
    void set_health(int health)
    {
        this->health = health;
    }
    void set_alive(bool alive)
    {
        this->alive = alive;
    }
    void set_kill(int kill)
    {
        this->kill = kill;
    }
    string get_name()
    {
        return name;
    }
    int get_health()
    {
        return health;
    }
    int get_alive()
    {
        return alive;
    }
    int get_kill()
    {
        return kill;
    }
};
int add_kill(player k1, player k2)
{
    return (k1.get_kill() + k2.get_kill());
}
// int total_kill(int k1, int k2)
// {
//     return k1 + k2;
// }
player Max_Kill_player(player a, player b)
{
    if (a.get_kill() > b.get_kill())
        return a;
    else
        return b;
}
int main()
{
    player ff;
    player gf;
    ff.set_name("Destroyer");
    gf.set_name("Hacker");
    ff.set_health(200);
    gf.set_health(200);
    ff.set_kill(10);
    gf.set_kill(20);
    ff.set_alive(true);
    gf.set_alive(true);
    cout << add_kill(ff, gf) << " ";
    // cout << total_kill(ff.get_kill(), gf.get_kill());
    player noob = Max_Kill_player(ff, gf);
    cout << noob.get_kill();
}