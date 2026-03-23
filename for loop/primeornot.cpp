#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, c = 0;
    cout << "enter any no: ";
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << n << " is not prime";
            c = 1;
            break;
        }
    }
    if (c == 0)
        cout << n << " is prime";
}