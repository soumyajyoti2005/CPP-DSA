#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter any number: ";
    cin >> n;
    int x = 1;
    for (int i = 0; x << 1 <= n; i++) // in condition this also right x*2<=n;
    {
        // x = x * 2;
        x = x << 1;
    }
    cout << x;
}