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

int max_node(TreeNode *root)
{
    if (root == NULL)
        return INT32_MIN;
    return max(root->val, max(max_node(root->left), max_node(root->right)));
}

int min_node(TreeNode *root)
{
    if (root == NULL)
        return INT32_MAX;
    return min(root->val, min(min_node(root->left), min_node(root->right)));
}

bool isvalid(TreeNode *root)
{
    if (root == NULL)
        return true;
    else if ((root->val > max_node(root->left)) && (root->val < min_node(root->right)))
    {
        return isvalid(root->left) && isvalid(root->right);
    }
    else
        return false;
}

int main()
{
    TreeNode *a = new TreeNode(6);
    TreeNode *b = new TreeNode(2);
    TreeNode *c = new TreeNode(8);
    TreeNode *d = new TreeNode(0);
    TreeNode *e = new TreeNode(4);
    TreeNode *f = new TreeNode(7);
    TreeNode *g = new TreeNode(9);
    TreeNode *h = new TreeNode(3);
    TreeNode *i = new TreeNode(5);

    a->left = b;
    // a->right = c;
    // b->left = d;
    // b->right = e;
    // c->left = f;
    // c->right = g;
    // e->left = h;
    // e->right = i;
    TreeNode *root = a;

    cout << isvalid(root);
}