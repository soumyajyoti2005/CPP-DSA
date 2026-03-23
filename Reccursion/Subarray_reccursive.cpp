#include <iostream>
#include <vector>
#include <string>
using namespace std;
void subsets(vector<int> &original, vector<int> v, int idx, vector<vector<int>> &ans)
{

    if (idx == original.size())
    {
        if (v.size() > 1)
        {
            int c = 0;
            for (int i = 0; i < v.size() - 1; i++)
            {
                if (v[i + 1] - v[i] != 1)
                {
                    c++;
                    break;
                }
            }
            if (c == 0)
                ans.push_back(v);
        }
        else
            ans.push_back(v);
        return;
    }
    subsets(original, v, idx + 1, ans);
    v.push_back(original[idx]);
    subsets(original, v, idx + 1, ans);
}
int main()
{
    vector<vector<int>> v;
    vector<int> x;
    vector<int> w;
    w.push_back(1);
    w.push_back(2);
    w.push_back(3);
    subsets(w, x, 0, v);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j];
        }
        cout << endl;
    }
}