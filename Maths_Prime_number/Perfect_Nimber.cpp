#include <iostream>
#include <cmath>
using namespace std;
int check_perfect(int n)
{
    if (n == 2)
        return 1;
    if (n == 1)
        return 0;
    int sum = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                sum += i;
            else
            {
                sum += i;
                sum += n / i;
            }
        }
    }
    return sum;
}
int main()
{
    int n = 2;
    int sum = check_perfect(n);
    cout << sum << " ";
    if (sum == n)
        cout << true;
    else
        cout << false;
}