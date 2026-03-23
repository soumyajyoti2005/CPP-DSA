#include <iostream>
using namespace std;
int main()
{
    int n, key, c = 0;
    cout << "enter no of elements in array: ";
    cin >> n;
    int a[n];
    cout << "enter elements in array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter no which have to search: ";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            c++;
            break;
        }
    }
    if (c == 1)
        cout << key << " has found";
    else
        cout << key << " not found ";
}