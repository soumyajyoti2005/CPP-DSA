#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums;

    nums.push_back(1);
    // // nums.push_back(1);
    // // nums.push_back(1);
    // nums.push_back(2);
    // // nums.push_back(2);
    // nums.push_back(3);
    // // nums.push_back(3);
    // // nums.push_back(3);
    // // nums.push_back(3);
    // nums.push_back(4);
    // // nums.push_back(4);
    // // nums.push_back(4);
    // nums.push_back(5);
    // // nums.push_back(5);

    int n = nums.size();
    int i = 0;
    int j = 1;
    int k = 0;
    int count = 1;

    while (j <= n - 1)
    {
        if (nums[i] == nums[j])
        {
            count++;
            j++;
        }

        else if (nums[i] != nums[j])
        {
            if (count >= 2)
            {
                nums[k] = nums[i];
                nums[k + 1] = nums[i];
                k += 2;
                i = j;
                j++;
            }
            else if (count < 2)
            {
                nums[k] = nums[i];
                k += count;
                i = j;
                j++;
            }
            count = 1;
        }
    }

    if (count >= 2)
    {
        nums[k] = nums[i];
        nums[k + 1] = nums[i];
        k += 2;
    }
    if (count < 2)
    {
        nums[k] = nums[i];
        k += count;
    }
    k = k - 1;
    for (int i = 0; i <= k; i++)
    {
        cout << nums[i];
    }
}