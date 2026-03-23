#include <iostream>
#include <string>
using namespace std;
void remove(string s, string t, char a, int i, int n)
{

    if (i == n)
    {
        cout << t << endl;
        return;
    }
    if (s[i] != a)
        t += s[i];
    remove(s, t, a, i + 1, n);
}
int main()
{
    string s = "coding addiction";
    int n = s.size() - 1;
    remove(s, "", 'd', 0, n);
}