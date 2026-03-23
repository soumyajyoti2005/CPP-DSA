// array is sorted like {1 2 3 4 5...} we have to find any sub sequences of int k length;
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void subsets(vector<int> &original, vector<int> v, int idx, vector<vector<int>> &x, int k)
{

    if (idx == original.size())
    {
        //  x.push_back(v);
        //  return;
        if (v.size() == k)
        {
            for (int i = 0; i < v.size(); i++)
                cout << v[i];
            cout << endl;
        }
        return;
        // x.push_back(v);
        // return x;
    }
    subsets(original, v, idx + 1, x, k);
    v.push_back(original[idx]);
    subsets(original, v, idx + 1, x, k);
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
    int k = 3;
    subsets(w, x, 0, v, k);

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }
}