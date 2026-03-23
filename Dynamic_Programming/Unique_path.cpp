#include <iostream>
#include <vector>
using namespace std;
int maze(int r, int c, vector<vector<int>> &ans)
{
    if (r == 0 || c == 0)
    {
        ans[r][c] = 1;
        return ans[r][c];
    }
    if (ans[r][c] == 0)
    {
        ans[r][c] = maze(r - 1, c, ans) + maze(r, c - 1, ans);
        return ans[r][c];
    }
    else
        // ans[r][c] = ans[r - 1][c] + ans[r][c - 1];
        return ans[r][c];
}

int main()
{
    int r = 4;
    int c = 4;
    vector<vector<int>> ans(r, vector<int>(c, 0));
    maze(r - 1, c - 1, ans);
    cout << ans[r - 2][c - 1] + ans[r - 1][c - 2];
}