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

int sum(TreeNode *root)
{
    if (root == NULL)
        return 0;
    return root->val + sum(root->left) + sum(root->right);
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

    cout << sum(a);
}