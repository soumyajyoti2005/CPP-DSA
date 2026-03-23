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

int Level(TreeNode *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(Level(root->left), Level(root->right));
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

    cout << Level(a);
}