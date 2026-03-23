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
    int nums[][3] = {{1, 2, 19}, {5, 17, 7}, {13, 10, 11}};
    int n = 3;
    int prime = 0;
    int max_prime = 0;
    for (int i = 0, j = 0; i < n && j < n; i++, j++)
    {
        if (check_prime(nums[i][j]))
        {
            prime = nums[i][j];
            if (prime > max_prime)
                max_prime = prime;
        }
    }
    for (int i = 0, j = n - 1; i <= n - 1 && j >= 0; i++, j--)
    {
        if (check_prime(nums[i][j]))
        {
            prime = nums[i][j];
            if (prime > max_prime)
                max_prime = prime;
        }
    }
    cout << max_prime;
}