#include <iostream>
using namespace std;
int main()
{
    int n = 2;
    int maxWeight = 15;
    int w = 3;

    if ((maxWeight / w) <= n * n)
        cout << maxWeight / w;
    else
        cout << n * n;
}