#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number till you want: ";
    cin >> n;
    int a = 0, b = 1, c = 0, s = 0, y = 4;
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        for (int x = y; x < b && x <= n; x++)
        {
            cout << "the non fobonacci numbers are: " << x << " " << endl;
            s = s + x;
            y = b + 1;
        }
    }
    cout << "the sum of non fibonacci numers is: " << s;
}