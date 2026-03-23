#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cout << "enter an even no of charrachters string: ";
    getline(cin, s);
    int l = s.length();
    if (l % 2 == 0)
    {
        reverse(s.begin(), s.end() - l / 2);
        cout << s;
    }
    else
    {
        cout << "invalid input";
    }
}