#include <iostream>
using namespace std;
void finddigit(int n, int *ld, int *fd)
{
    int c = 0, r;
    while (n)
    {
        r = n % 10;
        n /= 10;
        c++;
        if (c == 1)
            *ld = r;
    }
    *fd = r;
}
int main()
{
    int n, ld, fd;
    cout << "enter a no: ";
    cin >> n;
    finddigit(n, &ld, &fd);
    cout << "first digit " << fd << endl;
    cout << "last digit " << ld;
}