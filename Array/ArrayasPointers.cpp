#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    cout << *ptr << endl;
    cout << ptr[0] << endl;
    for (int i = 0; i < 5; i++)
    {
        ptr[i] = i;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << ptr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
}