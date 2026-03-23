#include <iostream>
using namespace std;
int Kth_symbol(int n, int k)
{
    int x;
    if (n == 1)
        return 0;
    if (k % 2 == 0)
    {
        x = Kth_symbol(n - 1, k / 2);
        if (x == 0)
            return 1;
        else if (x == 1)
            return 0;
    }
    else if (k % 2 != 0)
    {
        x = Kth_symbol(n - 1, (k + 1) / 2);
        if (x == 1)
            return 1;
        else if (x == 0)
            return 0;
    }
    return x;
}
int main()
{
    cout << Kth_symbol(3, 2);
}