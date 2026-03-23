#include <iostream>
using namespace std;
int prime_factors(int n, int i, int count, int c)
{
    if (i > n)
        return count;
    if (n % i == 0)
    {
        if (c == 0)
            count++;
        c++;
        return prime_factors(n / i, i, count, c);
    }
    else
    {
        return prime_factors(n, i + 1, count, 0);
    }
}
int main()
{
    cout << prime_factors(2 * 3 * 5 * 43 * 23, 2, 0, 0);
}