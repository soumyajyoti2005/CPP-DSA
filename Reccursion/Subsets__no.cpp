#include <iostream>
#include <vector>
#include <string>
using namespace std;
void subsets(vector<int> &original, vector<int> &v, int idx, vector<vector<int>> &x)
{

    if (idx == original.size())
    {
        //  x.push_back(v);
        //  return;
        for (int i = 0; i < v.size(); i++)
            cout << v[i];
        cout << endl;
        return;
        // x.push_back(v);
        // return x;
    }

    v.push_back(original[idx]);
    subsets(original, v, idx + 1, x);
    v.pop_back();
    subsets(original, v, idx + 1, x);

    // subsets(original, v, idx + 1, x);
    // v.push_back(original[idx]);        //-> for this we have to pass "vector<int> v" not "vector<int>& v";
    // subsets(original, v, idx + 1, x);
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

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }
}