#include <iostream>
using namespace std;
void Traverse_array(int *a, int n)
{
    if (n == -1)
        return;
    Traverse_array(a, n - 1);
    cout << a[n] << " ";
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    Traverse_array(arr, 4);
}