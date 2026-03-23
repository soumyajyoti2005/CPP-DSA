#include <iostream>
using namespace std;
class vehicle
{
public:
    int tyre_size;
    int engine_size;
    virtual void show1() // runtime binding as virtual
    {
        cout << "A is calling " << endl;
    }
    void show2()
    {
        cout << "A is again calling " << endl;
    }
};
class Bike : public vehicle
{
public:
    int handale_size;
    void show1()
    {
        cout << "B is calling " << endl;
    }
};
int main()
{
    vehicle a;
    Bike b;
    cout << sizeof(a) << " ";
    cout << sizeof(b);
}