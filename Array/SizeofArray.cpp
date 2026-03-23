#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 3, 4, 6, 8, 7, 4, 32, 9};
    int size = sizeof(a) / sizeof(a[0]);
    cout << size;
}