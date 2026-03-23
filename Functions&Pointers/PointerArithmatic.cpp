#include <iostream>
using namespace std;
int main()
{
    int x = 4, y = 9;
    int *p = &x, *q = &y;
    cout << p << endl;
    p = p + 1; // p=p+n -> p=p+n*sizeof(int)
    cout << p << endl;
    (*q)++;
    cout << y;
}