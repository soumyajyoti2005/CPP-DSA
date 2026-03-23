#include <iostream>
using namespace std;
int power(int a, int b)
{
    int p = 1;
    for (int i = 1; i <= b; i++)
    {
        p = p * a;
    }
    return p;
}
int BtoD(int n)
{
    int s = 0, c = 0;
    int r;
    while (n)
    {
        r = n % 10;
        n /= 10;
        c++;
        s = s + r * power(2, c - 1);
    }
    return s;
}
int main()
{
    int n = 11;
    cout << BtoD(n);
}