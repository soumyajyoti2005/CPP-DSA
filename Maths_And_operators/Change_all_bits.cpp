#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter any number: ";
    cin >> x;
    int n = x;
    for (int i = 1; i <= 16; i *= 2)
    {
        x = x | x >> i;
    }
    n = n ^ x;
    cout << n;
}