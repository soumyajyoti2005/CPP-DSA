#include <iostream>
using namespace std;
int main()
{
    int nums[] = {1, 3, 2, 4, 2, 6, 3, 1, 4};
    int n = 9;
    int single = nums[0];
    for (int i = 1; i < n; i++)
    {
        single = single ^ nums[i];
    }
    cout << single;
}