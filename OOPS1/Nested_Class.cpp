#include <iostream>
using namespace std;
class Gun
{
private:
    // public:
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
    int gun_getter()
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

    public:
        void set_helmet(int hp)
        {
            this->hp = hp;
            if (hp == 15)
                this->level = 3;
            if (hp == 10)
                this->level = 2;
            if (hp == 5)
                this->level = 1;
            if (hp == 0)
                this->level = 0;
        }
        int get_hp()
        {
            return hp;
        }
        int get_level()
        {
            return level;
        }
    };
    int health = 200;
    int kill;
    bool alive;
    Gun gun;
    Helmet helmet;

public:
    void set_player(int kill, bool alive, Gun gun)
    {
        this->kill = kill;
        this->alive = alive;
        this->gun = gun;
    }
    void helmet_setter(int hp)
    {
        Helmet *helmet = new Helmet;
        helmet->set_helmet(hp);
        this->helmet = *helmet;
    }
    void get_player()
    {
        cout << health << " " << alive << endl;
    }
    void get_helmet()
    {
        cout << helmet.get_hp() << endl;
        cout << helmet.get_level() << endl;
    }
    Gun get_gun()
    {
        return gun;
    }
};
int main()
{
    Gun M4A1;
    M4A1.set_gun_attributes(35, 25, 4);

    Gun UMP;
    UMP.set_gun_attributes(30, 30, 2);

    player pro;
    pro.set_player(10, true, M4A1);
    pro.helmet_setter(15);
    pro.get_helmet();
    pro.get_player();
    Gun gun_new = pro.get_gun();
    cout << gun_new.gun_getter();
}