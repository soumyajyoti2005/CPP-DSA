#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter the value of three side of triangle: ";
    cin >> a >> b >> c;
    if ((a + b) > c && (b + c) > a && (a + c) > b)
    {
        cout << "values can be side of triangle";
    }
    else

        cout << "can not be side of triangle";
}