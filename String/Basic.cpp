#include <iostream>
#define size 50
using namespace std;
int main()
{
    // char str[] = {'a', 'b', 'c', 'd'};
    // char str[size] = "insight";
    string str = "insight";
    for (int i = 0; str[i] != '\0'; i++)
    {
        cout << str[i] << " ";
    }
}