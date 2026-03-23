#include <iostream>
#include <vector>
using namespace std;
int min(int a, int b)
{
    if (a > b)
        return b;
    else
        return a;
}
int main()
{
    vector<int> heights;
    int n, x, max, water = 0;
    cout << "enter no of elements in array: ";
    cin >> n;
    cout << "enter heights in given array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        heights.push_back(x);
    }
    int arr[n], brr[n];
    arr[0] = -1;
    max = heights[0];
    for (int i = 1; i < n; i++)
    {
        arr[i] = max;
        if (max < heights[i])
        {
            max = heights[i];
        }
    }

    brr[n - 1] = -1;
    max = heights[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        brr[i] = max;
        if (heights[i] > max)
        {
            max = heights[i];
        }
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (heights[i] < min(arr[i], brr[i]))
        {
            water = water + (min(arr[i], brr[i]) - heights[i]);
        }
    }
    cout << water;
}