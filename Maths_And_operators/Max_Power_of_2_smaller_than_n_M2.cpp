#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter any number: ";
    cin >> x;
    int n = x;
    int count = 0;
    for (int i = 1; x != 0; i++)
    {
        x = x & (x - 1);
        count++;
    }
    x = n;
    if (count == 1)
        x = n - 1;
    for (int i = 1; i <= count - 1; i++)
    {
        x = x & (x - 1);
    }
    cout << x;
}