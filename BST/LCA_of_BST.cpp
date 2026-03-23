#include <iostream>
#include <vector>
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

TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if ((p->val == root->val) || (q->val == root->val))
        return root;
    else if (((p->val > root->val) && (q->val < root->val)) || ((p->val < root->val) && (q->val > root->val)))
        return root;
    else if ((p->val > root->val) && (q->val > root->val))
        return lowestCommonAncestor(root->right, p, q);
    else
        return lowestCommonAncestor(root->left, p, q);
}

int main()
{
    TreeNode *a = new TreeNode(4);
    TreeNode *b = new TreeNode(2);
    TreeNode *c = new TreeNode(7);
    TreeNode *d = new TreeNode(1);
    TreeNode *e = new TreeNode(3);
    TreeNode *f = new TreeNode(12);
    TreeNode *g = new TreeNode(18);
    TreeNode *h = new TreeNode(6);
    TreeNode *i = new TreeNode(13);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    // c->left = f;
    // c->right = g;
    // e->left = h;
    // f->right = i;
    TreeNode *root = a;
}