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

void display(TreeNode *root)
{
    if (root == NULL)
        return;
    display(root->left);
    cout << root->val;
    display(root->right);
}

void insert(TreeNode *root, int val)
{
    TreeNode *temp = root;
    while (temp != NULL)
    {
        if (temp->val > val)
        {
            if (temp->left != NULL)
            {
                temp = temp->left;
            }
            else
            {
                TreeNode *new_node = new TreeNode(val);
                temp->left = new_node;
                break;
            }
        }
        else
        {
            if (temp->right != NULL)
            {
                temp = temp->right;
            }
            else
            {
                TreeNode *new_node = new TreeNode(val);
                temp->right = new_node;
                break;
            }
        }
    }
}

int main()
{
    TreeNode *a = new TreeNode(4);
    TreeNode *b = new TreeNode(2);
    TreeNode *c = new TreeNode(7);
    TreeNode *d = new TreeNode(1);
    TreeNode *e = new TreeNode(3);
    TreeNode *f = new TreeNode(12);
    TreeNode *g = new TreeNode(18);
    TreeNode *h = new TreeNode(6);
    TreeNode *i = new TreeNode(13);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    // c->left = f;
    // c->right = g;
    // e->left = h;
    // f->right = i;
    TreeNode *root = a;
    int val = 5;

    insert(root, val);
    display(root);
}