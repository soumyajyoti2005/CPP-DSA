#include <iostream>
using namespace std;
int maze(int r, int c)
{
    if (r == 1)
        return 1;
    if (c == 1)
        return 1;
    if (r == 2 && c == 2)
        return 2;
    return maze(r - 1, c) + maze(r, c - 1);
}

void path(int r, int c, string s)
{
    if (r == 1)
    {
        for (int i = 1; i <= c - 1; i++)
        {
            s = s + 'R';
        }
        cout << s << endl;
        return;
    }
    if (c == 1)
    {
        for (int i = 1; i <= r - 1; i++)
            s = s + 'D';
        cout << s << endl;
        return;
    }
    // cout << s << endl;
    path(r - 1, c, s + 'D');
    path(r, c - 1, s + 'R');
}

int main()
{
    cout << maze(4, 3) << endl;
    path(4, 4, "");
}