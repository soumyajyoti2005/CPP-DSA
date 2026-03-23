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

TreeNode *store = NULL;

void search_BST(TreeNode *root, int tar)
{
    if (root == NULL)
        return;
    if (root->val == tar)
    {
        store = root;
    }
    else if (root->val > tar)
    {
        search_BST(root->left, tar);
    }
    else if (root->val < tar)
    {
        search_BST(root->right, tar);
    }
}

int main()
{
    TreeNode *a = new TreeNode(10);
    TreeNode *b = new TreeNode(5);
    TreeNode *c = new TreeNode(15);
    TreeNode *d = new TreeNode(2);
    TreeNode *e = new TreeNode(8);
    TreeNode *f = new TreeNode(12);
    TreeNode *g = new TreeNode(18);
    TreeNode *h = new TreeNode(6);
    TreeNode *i = new TreeNode(13);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    e->left = h;
    f->right = i;
    TreeNode *root = a;
    int target = 12;

    search_BST(root, target);
    cout << store->val;
}