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

void find(TreeNode *root, int lev, int curr, int *value)
{
    if (root == NULL)
        return;

    if (curr == lev)
    {

        (*value) = root->val;

        return;
    }

    if ((*value) == INT16_MIN)
        find(root->left, lev, curr + 1, value);
    
    if ((*value) == INT16_MIN)
        find(root->right, lev, curr + 1, value);
    
}

int main()
{

    TreeNode *a = new TreeNode(1);
    TreeNode *b = new TreeNode(2);
    TreeNode *c = new TreeNode(3);
    TreeNode *d = new TreeNode(3);
    TreeNode *e = new TreeNode(5);
    TreeNode *f = new TreeNode(6);
    TreeNode *g = new TreeNode(7);

    a->left = b;
    a->right = c;
    // b->left = d;
    // b->right = e;
    // // c->left = f;
    // c->right = g;
    TreeNode *root = a;

    int lev = Level(root);

    int value = INT16_MIN;
    find(root, lev, 1, &value);
    cout << value;
}