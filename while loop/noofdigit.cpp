#include <iostream>
using namespace std;
int main()
{
    int n, c = 0, x;
    cout << "enter any no: ";
    cin >> n;
    x = n;
    while (n)
    {
        n /= 10;
        c++;
    }
    cout << x << " is " << c << " digit no.";
}