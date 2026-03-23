#include <iostream>
using namespace std;
int factors_235(int n, int i)
{
    if (i > 5 || n == 1)
        return n;
    if (n % i == 0)
        return factors_235(n / i, i);
    else
        return factors_235(n, i + 1);
}
int main()
{
    int num = factors_235(17, 2);
    cout << num << " ";
    if (num > 5)
        cout << false; // not ugly
    else
        cout << true; // ugly
}