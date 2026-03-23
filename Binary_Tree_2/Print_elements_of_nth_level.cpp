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

void nth_elements(TreeNode *root, int lev, int ex_lev)
{

    if (root == NULL)
    {
        return;
    }
    if (lev == ex_lev)
    {
        cout << root->val << " ";
        return;
    }

    nth_elements(root->left, lev + 1, ex_lev);
    nth_elements(root->right, lev + 1, ex_lev);
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
    TreeNode *h = new TreeNode(8);
    TreeNode *i = new TreeNode(9);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    f->left = h;
    g->right = i;

    nth_elements(a, 1, 1);
}