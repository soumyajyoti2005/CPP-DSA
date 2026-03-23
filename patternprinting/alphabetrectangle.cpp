#include <iostream>
using namespace std;
int main()
{
    int n, a;
    cout << "enter no of row: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        a = 64;
        for (int j = 1; j <= n; j++)
        {
            a += 1;
            cout << (char)a << " ";
        }
        cout << endl;
    }
}