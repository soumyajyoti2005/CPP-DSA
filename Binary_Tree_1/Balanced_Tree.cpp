#include <iostream>
using namespace std;

int maxdia = 0;
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

int level(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return 1 + max(level(root->left), level(root->right));
}
bool check_balanced(TreeNode *root)
{
    if (root == NULL)
        return true;

    int levl = level(root->left);
    int levr = level(root->right);
    if (levl - levr == 0 || levl - levr == 1 || levl - levr == -1)
    {
        check_balanced(root->left);
        check_balanced(root->right);
    }
    else
        return false;
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
    c->left = d;
    c->right = e;

    cout << check_balanced(a);
}