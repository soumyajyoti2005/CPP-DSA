#include <iostream>
using namespace std;
int main()
{
    int n, c = 0, s = 0, r, x = 0;
    cout << "enter any no: ";
    cin >> n;

    while (n)
    {
        r = n % 10;
        s = s * 10 + r;
        n /= 10;
    }

    while (s)
    {
        r = s % 10;
        c++;
        if (c % 2 == 0)
        {
            x += r;
        }
        s /= 10;
    }
    cout << "sum of even position digit: " << x;
}