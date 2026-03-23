#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int count = 0, maxc = 0;
    char ch;
    string s;
    getline(cin, s);
    sort(s.begin(), s.end());
    cout << s;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == s[i + 1])
            count++;
        else
        {
            if (count > maxc)
            {
                maxc = count + 1;
                ch = s[i - 1];
            }
            count = 0;
        }
    }
    cout << endl;
    cout << ch << " " << maxc;
}