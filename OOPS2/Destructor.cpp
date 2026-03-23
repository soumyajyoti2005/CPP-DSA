#include <iostream>
using namespace std;
class Bike
{
public:
    int tyre_size;
    int engine_size;
    Bike(int tyre_size, int engine_size)
    {
        this->tyre_size = tyre_size;
        this->engine_size = engine_size;
    }
    ~Bike()
    {
        cout << "destructor called " << endl;
    }
};
int main()
{
    Bike tvs(12, 100);
    Bike Honda(13, 150);
    cout << tvs.tyre_size << " " << tvs.engine_size;
    cout << endl;
    cout << Honda.tyre_size << " " << Honda.engine_size << endl;
}