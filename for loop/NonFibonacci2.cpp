#include <iostream>
using namespace std;
int main()
{
    int n, count = 0, s = 0, a = 0, b = 1, c = 0, y = 4;
    cout << "enter how many terms you want: ";
    cin >> n;
    cout << "the non fibonacci nubers are: ";
    for (int i = 1; count < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        for (int x = y; x < b && count < n; x++)
        {
            cout << x << " ";
            s += x;
            y = b + 1;
            count++;
        }
    }
    cout << endl
         << "the sum of non fibonacci numbers is: " << s;
}