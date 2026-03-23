#include <iostream>
using namespace std;
int strlegnth(string s)
{
    int l = 0;
    for (int i = 0; s[i]; i++)
    {
        l++;
    }
    return l;
}
void mystrrev(string &s)
{
    int l = strlegnth(s);
    char t;
    for (int i = 0, j = l - 1; i < j; i++, j--)
    {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
    }
    return;
}

int main()
{
    string str;
    getline(cin, str);
    mystrrev(str);
    cout << str;
}