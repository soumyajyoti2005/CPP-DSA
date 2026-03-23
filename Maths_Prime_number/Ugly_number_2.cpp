// Time Complexcity not good so not acceptable in leetcode;
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
    int count = 1;
    int k = 1690; // 2123366400
    if (k == 1)
        cout << 1;
    for (int i = 2; count < k; i++)
    {
        int num = factors_235(i, 2);
        if (num < 5)
        {
            count++;
        }
        if (count == k)
        {
            cout << i << " ";
            break;
        }
    }
}