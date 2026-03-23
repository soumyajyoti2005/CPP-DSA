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
        s = s + r;
        n /= 10;
    }
    cout << "the sum of digit of " << x << " is " << s;
}