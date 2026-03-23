#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1, 2, 4, 5, 9};
    int i = 0, j = 4, mid;
    int target = 5;
    int c = 0;
    if (target < a[0])
        cout << "no lower bound exist";
    else
    {
        while (i <= j)
        {
            mid = (i + j) / 2;
            if (a[mid] == target)
            {
                c++;
                cout << a[mid - 1];
                break;
            }
            if (a[mid] < target)
                i = mid + 1;
            if (a[mid] > target)
                j = mid - 1;
        }
        if (c == 0)
            cout << a[i - 1];
    }
}