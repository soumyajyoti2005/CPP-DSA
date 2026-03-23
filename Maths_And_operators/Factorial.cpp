#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long n = 40;
    vector<long long> fact(n + 1, 1);
    fact[0] = 1;
    fact[0] = 1;
    long long mod = 1000000007;
    for (long long i = 2; i <= n; i++)
    {
        fact[i] = (fact[i - 1] % mod * i % mod) % mod;
    }
    for (int i = 0; i <= n; i++)
    {
        cout << fact[i] << endl;
    }
}