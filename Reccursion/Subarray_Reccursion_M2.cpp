#include <iostream>
#include <vector>
#include <string>
using namespace std;
void subsets(vector<int> &original, vector<int> v, int idx, vector<vector<int>> &ans)
{

    if (idx == original.size())
    {

        ans.push_back(v);
        return;
    }
    subsets(original, v, idx + 1, ans);
    if (v.size() == 0 || v[v.size() - 1] == original[idx - 1])
    {
        v.push_back(original[idx]);
        subsets(original, v, idx + 1, ans);
    }
}
int main()
{
    vector<vector<int>> v;
    vector<int> x;
    vector<int> w;
    w.push_back(1);
    w.push_back(2);
    w.push_back(3);
    w.push_back(4);
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