#include <iostream>
using namespace std;
class Bike
{
public:
    static int No_of_bikes;
    int tyre_size;
    int engine_size;
    Bike(int tyre_size, int engine_size)
    {
        this->tyre_size = tyre_size;
        this->engine_size = engine_size;
    }
    static void Increase_no_of_bikes()
    {
        No_of_bikes++;
    }
};
int Bike::No_of_bikes = 10;
int main()
{
    Bike tvs(12, 100);
    Bike Honda(15, 150);
    cout << tvs.No_of_bikes << " ";
    tvs.Increase_no_of_bikes();
    cout << tvs.No_of_bikes << " ";
    cout << tvs.No_of_bikes;
}