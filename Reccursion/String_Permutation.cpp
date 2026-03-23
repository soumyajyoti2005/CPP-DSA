#include <iostream>
#include <string>
using namespace std;
void permutation(string ans, string& original)
{
    if (original == "")
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < original.size(); i++)
    {
        string neworiginal = "";
        for (int j = 0; j < original.size(); j++)
        {
            if (original[i] != original[j])
                neworiginal += original[j];
        }
        permutation(ans + original[i], neworiginal);
    }
}
int main()
{
    string s="abc";
    permutation("", s);
}