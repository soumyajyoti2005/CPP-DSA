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

bool same_tree(TreeNode *root1, TreeNode *root2)
{
    if (root1 == NULL && root2 == NULL)
        return true;
    if ((root1 == NULL && root2 != NULL) || (root1 != NULL && root2 == NULL))
        return false;

    if (root1->val != root2->val)
        return false;
    bool l = same_tree(root1->left, root2->left);
    if (l == false)
        return false;
    bool r = same_tree(root1->right, root2->right);
    if (r == false)
        return false;
    return true;
}

int main()
{
    TreeNode *a = new TreeNode(1);
    TreeNode *b = new TreeNode(2);
    TreeNode *c = new TreeNode(3);
    TreeNode *d = new TreeNode(4);
    TreeNode *e = new TreeNode(5);

    a->left = b;
    a->right = c;
    b->left = d;
    d->right = e;

    TreeNode *f = new TreeNode(1);
    TreeNode *g = new TreeNode(2);
    TreeNode *h = new TreeNode(3);
    TreeNode *i = new TreeNode(4);
    TreeNode *j = new TreeNode(5);

    f->left = g;
    f->right = h;
    g->left = i;
    i->right = j;

    cout << same_tree(a, f);
}