#include <iostream>
using namespace std;
int main()
{
    int n, r, s = 0;
    cout << "enter any no: ";
    cin >> n;
    while (n)
    {
        r = n % 10;
        if (r % 2 == 0)
        {
            s += r;
        }
        n /= 10;
    }
    cout << "sum of even digits: " << s;
    return 0;
}