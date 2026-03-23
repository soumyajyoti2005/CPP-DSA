#include <iostream>
#include <vector>
using namespace std;
class Gun
{
private:
    string name;
    int amno;
    int damage;
    int scope;

public:
    void set_gun_attributes(string name, int amno, int damage, int scope)
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
int main()
{
    vector<Gun> guns;
    string s;
    int a, d, sco;
    for (int i = 0; i < 2; i++)
    {
        Gun *gun = new Gun;
        cout << "enter gun name ,amno,damage and scope attatched with " << i + 1 << "gun: ";
        cin >> s;
        cin >> a;
        cin >> d;
        cin >> sco;
        gun->set_gun_attributes(s, a, d, sco);
        guns.push_back(*gun);
    }
    for (int i = 0; i < 1; i++)
    {
        cout << guns[i].get_amno();
    }
}