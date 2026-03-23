#include <iostream>
#include <string>
using namespace std;
void remove(string t, string s)
{
    if (s == "")
    {
        cout << t;
        return;
    }
    if (s[0] != 'e')
    {
        t += s[0];
    }
    remove(t, s.substr(1));
}
int main()
{
    remove("", "Leetcode");
}