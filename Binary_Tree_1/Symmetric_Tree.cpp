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

void invert_tree(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    TreeNode *t = root->left;
    root->left = root->right;
    root->right = t;

    invert_tree(root->left);
    invert_tree(root->right);
}

bool check_same_tree(TreeNode *root1, TreeNode *root2)
{
    if (root1 == NULL && root2 == NULL)
        return true;
    if (root1 == NULL || root2 == NULL)
        return false;

    if (root1->val == root2->val)
    {
        return check_same_tree(root1->left, root2->left) && check_same_tree(root1->right, root2->right);
    }
    else
        return false;
}

void display(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    display(root->left);
    display(root->right);
}

int main()
{
    TreeNode *a = new TreeNode(1);
    TreeNode *b = new TreeNode(2);
    TreeNode *c = new TreeNode(2);
    TreeNode *d = new TreeNode(3);
    TreeNode *e = new TreeNode(4);
    TreeNode *f = new TreeNode(4);
    TreeNode *g = new TreeNode(3);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    display(a);
    cout << endl;
    invert_tree(a->right);
    display(a);
    cout << endl;
    cout << check_same_tree(a->left, a->right);
}