#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter no of total students: ";
    cin >> n;
    int a[n];
    cout << "enter marks of " << n << " student: " << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i <= n - 1; i++)
    {
        if (a[i] < 35)
            cout << "roll no " << i << " got less than 35" << endl;
    }
}