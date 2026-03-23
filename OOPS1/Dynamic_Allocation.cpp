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
int main()
{
    player *pro = new player;
    pro->set_name("noob");
    pro->set_health(200);
    pro->set_kill(18);
    pro->set_alive(1);
    cout << pro->get_name();
}