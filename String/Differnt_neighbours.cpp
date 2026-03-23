#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i + 1] == '\0')
            break;
        if (s[i] != s[i + 1])
            count++;
    }
    cout << count;
}