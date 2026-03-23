#include <iostream>
using namespace std;
class vehicle
{
public:
    int tyre_size;
    int engine_size;
    int lights;
    string company;
    void show_company()
    {
        cout << company;
    }
};
class car : public vehicle
{
public:
    int steering_size;
};
class Bike : public vehicle
{
public:
    int handle_size;
};
int main()
{
    Bike Honda;
    Honda.handle_size = 10;
    Honda.tyre_size = 15;
    Honda.company = "HONDA";
    Honda.show_company();
}