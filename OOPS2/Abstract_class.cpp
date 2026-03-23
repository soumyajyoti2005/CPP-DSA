#include <iostream>
using namespace std;
class vehicle
{
public:
    int tyre_size;
    int engine_size;
    virtual void calculate_milage() = 0;
    virtual void refuel() = 0;
};
class Bike : public vehicle
{
public:
    int handale_size;
    void calculate_milage()
    {
        cout << "milage of bike ";
    }
    void refuel()
    {
        cout << "refuel time of bike ";
    }
};
int main()
{
    Bike B;
    B.calculate_milage();
    B.refuel();
}