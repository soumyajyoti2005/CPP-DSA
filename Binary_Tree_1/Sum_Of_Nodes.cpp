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

void sum(TreeNode *root, int *s)
{
    if (root == NULL)
        return;
    (*s) += root->val;
    sum(root->left, s);
    sum(root->right, s);
}
int main()
{
    TreeNode *a = new TreeNode(1);
    TreeNode *b = new TreeNode(2);
    TreeNode *c = new TreeNode(3);
    TreeNode *d = new TreeNode(4);

    a->left = b;
    a->right = c;
    b->left = d;
    int s = 0;
    sum(a, &s);
    cout << s;
}