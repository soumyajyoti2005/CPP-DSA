#include <iostream>
#include<vector>
using namespace std;

void Bin_no(string s, int n,vector<string>& ans)
{
    if (s.length() == n)
    {
        ans.push_back(s);
        return;
    }
    if (s == "" || s[s.length() - 1] != '0')
        Bin_no(s + '0', n,ans);
    Bin_no(s + '1', n,ans);
}

int main()
{
    vector<string> ans;
    Bin_no("", 4,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}