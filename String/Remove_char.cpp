#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "code addiction";
    string t = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != 'a')
            t = t + s[i];
    }
    cout << t;
}
