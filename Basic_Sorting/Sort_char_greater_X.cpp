#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s = "abzgxfsydexyzyzxdf";
    string t = "";
    for (int i = 0; s[i]; i++)
    {
        if (s[i] >= 'x')
        {
            t = t + s[i];
        }
    }
    sort(t.begin(), t.end());
    cout << t;
}