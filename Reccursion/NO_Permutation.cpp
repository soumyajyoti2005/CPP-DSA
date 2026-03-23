#include <iostream>
#include <vector>
using namespace std;
void permutation(vector<int> ans, vector<int> original, vector<vector<int>> &perm)
{
    if (original.size() == 0)
    {
        perm.push_back(ans);
        return;
    }
    for (int i = 0; i < original.size(); i++)
    {
        vector<int> new_original;
        for (int j = 0; j < original.size(); j++)
        {
            if (original[i] != original[j])
                new_original.push_back(original[j]);
        }

        ans.push_back(original[i]);
        permutation(ans, new_original, perm);
        ans.pop_back();
    }
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    vector<vector<int>> perm;
    vector<int> ans;
    permutation(ans, v, perm);

    for (int i = 0; i < perm.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            cout << perm[i][j];
        }
        cout << endl;
    }
}