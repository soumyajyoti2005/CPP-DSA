#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int a[13] = {1, 2, 2, 3, 3, 3, 3, 3, 4, 4, 5, 8, 9};
    int i = 0, j = 12, mid;
    int target = 6;
    int c = 0;
    while (i <= j)
    {
        mid = (i + j) / 2;
        if (a[mid] == target)
        {
            c++;
            if (a[mid - 1] == target)
                j = mid - 1;
            else
            {
                cout << j;
                break;
            }
        }
        if (a[mid] < target)
            i = mid + 1;
        if (a[mid] > target)
            j = mid - 1;
    }
    if (c == 0)
        cout << -1;
}