#include <iostream>
using namespace std;
int main()
{
    int n, r, x, s = 0;
    cout << "enter any no: ";
    cin >> n;
    x = n;
    while (n)
    {
        r = n % 10;
        s = s * 10 + r;
        n /= 10;
    }
    cout << "the reverse of " << x << " is " << s;
}