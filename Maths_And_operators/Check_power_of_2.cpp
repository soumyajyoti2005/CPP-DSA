#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter any number: ";
    cin >> x;
    int count = 0;
    for (int i = 1; x != 0; i++)
    {
        x = x & (x - 1);
        count++;
    }
    if (count == 1)
        cout << "number is a valid power of 2";
    else
        cout << "number is not valid power of 2";
}