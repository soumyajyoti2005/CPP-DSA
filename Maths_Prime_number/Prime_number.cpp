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
int main()
{
    cout << check_prime(7);
}