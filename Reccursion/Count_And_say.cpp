#include <iostream>
#include <string>
using namespace std;
string countAndSay(int n)
{
    if (n == 1)
        return "1";
    string s = countAndSay(n - 1);
    int count = 1;
    string t = "";
    char ch = s[0];
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == ch)
            count++;
        else
        {
            t = t + to_string(count) + ch;
            ch = s[i];
            count = 1;
        }
    }
    t = t + to_string(count) + ch;
    return t;
}
int main()
{
    cout << countAndSay(3);
}