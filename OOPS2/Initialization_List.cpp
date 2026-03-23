#include <iostream>
using namespace std;
class Bike
{
public:
    int tyre_size;
    int engine_size;
    Bike(int ts, int es) : tyre_size(ts), engine_size(es) {}
};
int main()
{
    Bike tvs(12, 150);
    Bike Honda(15, 200);
}