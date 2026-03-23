#include <iostream>
using namespace std;
class Bike
{
public:
    int tyre_size;
    Bike()
    {
        cout << "constructor is called with creation of objects " << endl;
    }
};
int main()
{
    Bike tvs;
    Bike Honda;
}