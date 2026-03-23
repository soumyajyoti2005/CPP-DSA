#include <iostream>
#include <vector>
using namespace std;
class Gun
{
private:
    int amno;
    int damage;
    int scope;

public:
    void set_gun_attributes(int amno, int damage, int scope)
    {
        this->amno = amno;
        this->damage = damage;
        this->scope = scope;
    }
    int get_amno()
    {
        return amno;
    }
};
class player
{
private:
    class Helmet
    {
        int hp;
        int level;
    };
    int health;
    int kill;
    bool alive;
    vector<Gun> gun;

public:
    void set_player(int health, int kill, bool alive)
    {
        this->health = health;
        this->kill = kill;
        this->alive = alive;
    }
    void set_guns(vector<Gun> g)
    {
        gun = g;
    }
    vector<Gun> get_guns()
    {
        return gun;
    }
};
int main()
{
    Gun M4A1;
    M4A1.set_gun_attributes(35, 30, 4);

    Gun UMP;
    UMP.set_gun_attributes(30, 30, 2);

    Gun MP40;
    MP40.set_gun_attributes(25, 30, 0);

    Gun AWM;
    AWM.set_gun_attributes(8, 150, 8);

    vector<Gun> guns_set1;
    guns_set1.push_back(M4A1);
    guns_set1.push_back(MP40);

    vector<Gun> guns_set2;
    guns_set2.push_back(AWM);
    guns_set2.push_back(MP40);

    player pro;
    pro.set_player(200, 10, true);
    pro.set_guns(guns_set1);

    player noob;
    noob.set_player(200, 7, true);
    noob.set_guns(guns_set2);
    vector<Gun> gun_setnew;
    gun_setnew = noob.get_guns();
    for (int i = 0; i < gun_setnew.size(); i++)
    {
        cout << (gun_setnew[i]).get_amno() << " ";
    }
}
