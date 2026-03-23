#include <iostream>
#include <vector>
#include <string>
using namespace std;
void subsets(string t, string s, vector<string> &v, bool flag)
{

    if (s == "")
    {
        // cout << t << endl;
        // return;
        v.push_back(t);
        return;
    }
    // char ch = s[0];
    if (s.length() == 1)
    {
        if (flag == true)
            subsets(t + s[0], s.substr(1), v, true);
        subsets(t, s.substr(1), v, true);
        // return;
    }
    // char dh = s[1];
    else if (s[0] == s[1])
    {
        if (flag == true)
            subsets(t + s[0], s.substr(1), v, true);
        subsets(t, s.substr(1), v, false);
    }
    else
    {
        if (flag == true)
            subsets(t + s[0], s.substr(1), v, true);
        subsets(t, s.substr(1), v, true);
    }
}
int main()
{
    vector<string> v;
    subsets("", "aaab", v, true);
    // for(string ele : )
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}