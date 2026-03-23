#include <iostream>
using namespace std;
int main()
{
    int x = 5, y = 2;
    int *p = &x, *q = &y;
    cout << *p + *q;
}