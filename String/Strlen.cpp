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

int main()
{
    string str;
    getline(cin, str);

    cout << strlegnth(str);
}