#include <iostream>
using namespace std;
int main()
{
    int n, s = 0;
    cout << "enter no of terms: "; // 1-2+3-4+5.....
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            s = s + i;
        else
            s = s - i;
    }
    cout << "the sum is: " << s;
}