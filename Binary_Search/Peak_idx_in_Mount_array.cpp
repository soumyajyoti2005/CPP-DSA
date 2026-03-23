#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 2, 1, 0};
    int i = 1;
    int j = 8;
    int mid;
    while (i <= j)
    {
        mid = (i + j) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            cout << mid;
            break;
        }
        else if (arr[mid] > arr[mid - 1] && arr[mid + 1] > arr[mid])
            i = mid + 1;
        else if (arr[mid + 1] < arr[mid] && arr[mid] < arr[mid - 1])
            j = mid - 1;
    }
}