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
    Bike(Bike *b) // Deep Copy
    {
        this->tyre_size = b->tyre_size;
        this->engine_size = b->engine_size;
    }
};
int main()
{
    Bike tvs(12, 100);
    Bike Honda(&tvs);
    cout << tvs.tyre_size << " " << tvs.engine_size;
    cout << endl;
    cout << Honda.tyre_size << " " << Honda.engine_size << endl;
    tvs.tyre_size = 15;
    cout << tvs.tyre_size << " " << tvs.engine_size;
    cout << endl;
    cout << Honda.tyre_size << " " << Honda.engine_size;
}