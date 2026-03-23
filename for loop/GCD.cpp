#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "enter two no";
    cin >> x >> y;
    int min;
    if (x > y)
        min = y;
    else
        min = x;
    for (int i = min; i >= 2; i--)
    {
        if (x % i == 0 && y % i == 0)
        {
            cout << "gcd is: " << i;
            break;
        }
    }
}