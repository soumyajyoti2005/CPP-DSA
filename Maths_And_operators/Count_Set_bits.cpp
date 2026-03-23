#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter any number: ";
    cin >> x;
    int count = 0;
    for (int i = 0; x != 0; i++)
    {
        x = x & (x - 1);
        count++;
    }
    cout << count;
}