#include <iostream>
#include <stack>
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

void traverse(TreeNode *root)
{
    if (root == NULL)
        return;
    traverse(root->right);
    cout << root->val << " ";
    traverse(root->left);
}

void bst_to_gst(TreeNode *root, int &prev_sum)
{
    if (root == NULL)
    {
        return;
    }
    bst_to_gst(root->right, prev_sum);
    if (prev_sum == -1)
    {
        prev_sum = root->val;
    }
    else
    {
        prev_sum = prev_sum + root->val;
    }
    root->val = prev_sum;
    bst_to_gst(root->left, prev_sum);
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

    // a->left = b;
    // a->right = c;
    // b->left = d;
    // b->right = e;
    // c->left = f;
    // c->right = g;
    // e->left = h;
    // e->right = i;
    TreeNode *root = a;

    int prev_sum = -1;
    bst_to_gst(root, prev_sum);
    traverse(root);
}