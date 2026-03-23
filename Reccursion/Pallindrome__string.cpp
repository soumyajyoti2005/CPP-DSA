#include <iostream>
#include <string>
using namespace std;
bool pallindrome(int i, int j, string s)
{
    if (i >= j)
        return true;
    if (s[i] != s[j])
        return false;
    pallindrome(i + 1, j - 1, s);
}
int main()
{
    string s = "a";
    int l = s.length();
    bool x = pallindrome(0, l - 1, s);
    if (x != 0)
        x = 1;
    cout << x;
}