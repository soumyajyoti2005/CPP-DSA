#include <iostream>
using namespace std;
int main()
{
    int y;
    cout << "enter a year: ";
    cin >> y;
    if ((y % 100 == 0 && y % 400 == 0) || (y % 100 != 0 && y % 4 == 0))
    {
        cout << y << " is leapyear";
    }
    else
        cout << y << " is not a leapyear";
}