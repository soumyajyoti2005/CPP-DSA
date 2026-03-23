#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter no of row:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; i + j <= n; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}