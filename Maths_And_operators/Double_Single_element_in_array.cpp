#include <iostream>
using namespace std;
int main()
{
    int nums[] = {1, 2, 1, 3, 2, 5};
    int length = 6;
    int n = 0;
    for (int i = 0; i < length; i++)
    {
        n = n ^ nums[i];
    }
    int temp = n;
    int k = 0;
    while (temp)
    {
        if ((temp & 1) == 1)
            break;
        temp = temp >> 1;
        k++;
    }
    int x_oring = 0;
    int x;
    for (int i = 0; i < length; i++)
    {
        x = nums[i];
        if (((x >> k) & 1) == 1)
            x_oring = x_oring ^ nums[i];
    }
    cout << x_oring << " ";
    n = n ^ x_oring;
    cout << n;
}