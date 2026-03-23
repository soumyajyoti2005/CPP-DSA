#include <iostream>
#include <string>
using namespace std;
bool isvalid(string s)
{
    int n = s.size();
    if (n % 2 != 0)
        return false;

    int i = 0;
    int open = 0;
    while (i < n)
    {
        if (s[i] == '(')
        {
            open++;
        }
        else if (s[i] == ')' && open > 0)
        {
            open--;
        }
        else if (s[i] == ')' && open == 0)
        {
            return false;
        }
        i++;
    }
    if (open == 0)
        return true;
    else
        return false;
}
int main()
{
    string s = "())()(";
    cout << isvalid(s);
}