#include <iostream>
using namespace std;
void print(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    print(n - 1);
    return;
}
int main()
{
    print(4);
}