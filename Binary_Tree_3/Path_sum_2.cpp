#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

void path_sum(TreeNode *root, int target, vector<int> v, vector<vector<int>> &ans)
{
    if (root->left == NULL && root->right == NULL)
    {
        if (target == root->val)
        {
            v.push_back(root->val);
            ans.push_back(v);
        }
        return;
    }

    if (root->left != NULL)
    {
        v.push_back(root->val);
        path_sum(root->left, target - root->val, v, ans);
        v.pop_back();
    }
    if (root->right != NULL)
    {
        v.push_back(root->val);
        path_sum(root->right, target - root->val, v, ans);
    }
}

int main()
{
    TreeNode *a = new TreeNode(1);
    TreeNode *b = new TreeNode(2);
    TreeNode *c = new TreeNode(3);
    TreeNode *d = new TreeNode(7);
    TreeNode *e = new TreeNode(5);
    TreeNode *f = new TreeNode(6);
    TreeNode *g = new TreeNode(7);
    TreeNode *h = new TreeNode(8);
    TreeNode *i = new TreeNode(9);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    TreeNode *root = a;

    vector<int> v;
    vector<vector<int>> ans;

    path_sum(root, 10, v, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j];
        }
    }
}