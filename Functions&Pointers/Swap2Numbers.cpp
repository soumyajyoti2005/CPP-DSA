#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
    return;
}
int main()
{
    int t, a = 5, b = 2;
    // t = a;
    // a = b;
    // b = t;

    // a = a + b;
    // b = a - b;
    // a = a - b;

    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;
    swap(&a, &b);
    cout << a << " " << b;
}