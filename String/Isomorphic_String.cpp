// don't sure that properly completed or not....
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    // vector<int> v;
    int c = 0, d = 0, e = 0;
    string s = "a";// paper | a | aab |
    string t = "a";// title | a | aaa |
    for (int i = 0; i <= s.length() - 1; i++)
    {
        for (int j = i + 1; j <= s.length() - 1; j++)
        {
            if (s[i] == s[j])
            {
                if (t[i] != t[j])
                {
                    // cout << "not isomorph";
                    c = 1;
                    break;
                }
                //  d = 1;
            }
        }
    }
    if (c != 1)
    {
        for (int i = 0; i <= t.length() - 1; i++)
        {
            for (int j = i + 1; j <= t.length() - 1; j++)
            {
                if (t[i] == t[j])
                {
                    if (s[i] != s[j])
                    {
                        // cout << "not isomorph";
                        c = 1;
                        break;
                    }
                    // e = 1;
                }
            }
            // if (c == 1)
            // {
            //     break;
            // }
        }
    }
    // if (d == 0)
    //     cout << "not isomorph";
    if (c == 0)
        cout << "isomorph";
    if (c == 1)
        cout << "not isomorph";
}