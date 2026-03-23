#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    int hcf = 1;
    for (int i = min(a, b); i >= 2; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
            break;
        }
    }
    return hcf;
}
int main()
{
    int m, n;
    cout << "enter two no: ";
    cin >> m >> n;
    cout << gcd(m, n);
}