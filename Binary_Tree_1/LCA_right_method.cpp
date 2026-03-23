#include <iostream>
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

bool is_exist(TreeNode *root, TreeNode *target)
{
    if (root == NULL)
        return false;
    if (root == target)
        return true;
    return is_exist(root->left, target) || is_exist(root->right, target);
}

TreeNode *LCA(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if (root == p || root == q)
        return root;
    else if ((is_exist(root->left, p) && is_exist(root->right, q)) || (is_exist(root->right, p) && is_exist(root->left, q)))
    {
        return root;
    }
    else if (is_exist(root->left, p) || is_exist(root->left, q))
    {
        return LCA(root->left, p, q);
    }
    else if (is_exist(root->right, p) || is_exist(root->right, q))
    {
        return LCA(root->right, p, q);
    }
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
}