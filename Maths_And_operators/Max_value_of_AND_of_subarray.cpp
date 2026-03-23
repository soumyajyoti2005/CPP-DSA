#include <iostream>
using namespace std;
int main()
{
    int nums[] = {1, 5, 5, 9, 9, 15, 13, 15, 15, 14, 15, 15, 15, 15, 15, 18};
    int n = 16;
    int max = nums[0];
    int idx;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
            idx = i;
        }
    }
    int count = 0;
    int max_len = 0;
    for (int i = idx; i < n; i++)
    {
        if (nums[i] == max)
        {
            count++;
            if (count > max_len)
                max_len = count;
        }
        else
        {

            count = 0;
        }
    }
    cout << max_len;
}