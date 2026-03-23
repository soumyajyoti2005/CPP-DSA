// not done

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

void path(TreeNode *root, vector<string> &ans, string st, TreeNode *p, TreeNode *q)
{
    if (root == NULL)
    {
        return;
    }
    if (root == p)
    {
        // if (st[st.size() - 1] - '0' != (root->val))
        st = st + to_string(root->val);
        ans.push_back(st);
    }

    else if (root == q)
    {
        // if (st[st.size() - 1] - '0' != (root->val))
        st = st + to_string(root->val);
        ans.push_back(st);
    }
    if (st[st.size() - 1] - '0' != root->val)
        st = st + to_string(root->val);

    path(root->left, ans, st, p, q);
    path(root->right, ans, st, p, q);
}

void check_node(int value, TreeNode *(&ans), TreeNode *root)
{
    if (root == NULL)
        return;
    if (value == root->val)
    {
        ans = root;
        return;
    }
    check_node(value, ans, root->left);
    check_node(value, ans, root->right);
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
    path(a, ans, "", b, e);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    int store;
    int count = 0;

    int n = min(ans[0].size(), ans[1].size());
    for (int i = 0; i < n; i++)
    {
        if (ans[0][i] != ans[1][i])
        {
            count++;
            store = ans[0][i - 1] - '0';
        }
    }
    if (count == 0)
    {
        if (ans[0].size() > ans[1].size())
        {
            store = ans[1][ans[1].size() - 1] - '0';
        }
        else
        {
            store = ans[1][ans[0].size() - 1] - '0';
        }
    }
    cout << store;
    TreeNode *store_node;
    check_node(store, store_node, a);
    cout << store_node->val;
}