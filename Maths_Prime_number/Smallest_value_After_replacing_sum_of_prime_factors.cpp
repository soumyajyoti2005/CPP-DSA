#include <iostream>
#include <cmath>
using namespace std;
bool check_prime(int n)
{
    if (n == 2)
        return true;
    if (n == 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int prime_factors(int n, int i, int sum)
{
    if (i > n)
        return sum;
    if (n % i == 0)
    {
        if (check_prime(i))
        {
            sum += i;
        }
        return prime_factors(n / i, i, sum);
    }
    else
    {
        return prime_factors(n, i + 1, sum);
    }
}
int prime_sum(int n)
{
    int sum = prime_factors(n, 2, 0);

    if (check_prime(sum))
    {
        return sum;
    }
    else
    {
        return prime_sum(sum);
    }
}
int main()
{
    int n;
    cout << "enter value of n: ";
    cin >> n;
    if (n == 4)
        cout << n;
    else if (check_prime(n))
    {
        cout << n;
    }
    else
    {
        cout << prime_sum(n);
    }
}