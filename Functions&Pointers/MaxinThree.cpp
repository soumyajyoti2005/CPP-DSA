#include <iostream>
using namespace std;
int maxthree(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
            return a;
        else
            return c;
    }
    else
    {
        if (b > c)
            return b;
        else
            return c;
    }
}
int main()
{
    int x, y, z;
    cout << "enter three no: ";
    cin >> x >> y >> z;
    cout << "the maximum element is :" << maxthree(x, y, z);
}