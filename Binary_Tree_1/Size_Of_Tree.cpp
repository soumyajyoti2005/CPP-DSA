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

int size(TreeNode *root)
{
    if (root == NULL)
        return 0;
    return 1 + size(root->left) + size(root->right);
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

    cout << size(a);
}