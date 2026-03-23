#include <iostream>
using namespace std;
int my_pow(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    int p = my_pow(a, b / 2);
    if (b % 2 != 0)
        return p * p * a;
    else
        return p * p;
}
int main()
{
    cout << my_pow(2, 2);
}