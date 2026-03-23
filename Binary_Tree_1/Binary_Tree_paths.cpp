#include <iostream>
#include <vector>
#include <algorithm>
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

void path(TreeNode *root, vector<string> &ans, string st)
{
    if (root->left == NULL && root->right == NULL)
    {
        st = st + to_string(root->val);
        ans.push_back(st);
        // cout << st << " ";

        return;
    }
    st = st + to_string(root->val) + "->";
    if (root->left != NULL)
        path(root->left, ans, st);
    if (root->right != NULL)
        path(root->right, ans, st);
}

int main()
{
    TreeNode *a = new TreeNode(1);
    TreeNode *b = new TreeNode(2);
    TreeNode *c = new TreeNode(3);
    TreeNode *d = new TreeNode(4);
    TreeNode *e = new TreeNode(5);
    TreeNode *f = new TreeNode(6);
    TreeNode *g = new TreeNode(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    vector<string> ans;
    path(a, ans, "");
    for (int i = 0; i < ans.size(); i++)
    {

        cout << ans[i] << " ";
    }
}