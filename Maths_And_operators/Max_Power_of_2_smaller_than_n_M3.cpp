#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter any number: ";
    cin >> x;
    x = x | x >> 1;
    x = x | x >> 2;
    x = x | x >> 4;
    x = x | x >> 8;
    x = x | x >> 16;
    int n = (x + 1) >> 1;
    cout << n;
}