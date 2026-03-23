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

void display(TreeNode *root, vector<TreeNode *> &v)
{
    if (root == NULL)
        return;

    display(root->left, v);
    v.push_back(root);
    display(root->right, v);
}

int main()
{
    TreeNode *a = new TreeNode(10);
    TreeNode *b = new TreeNode(5);
    TreeNode *c = new TreeNode(15);
    TreeNode *d = new TreeNode(2);
    TreeNode *e = new TreeNode(8);
    TreeNode *f = new TreeNode(12);
    TreeNode *g = new TreeNode(18);
    TreeNode *h = new TreeNode(6);
    TreeNode *i = new TreeNode(13);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    e->left = h;
    f->right = i;
    TreeNode *root = a;
    int target = 16;

    vector<TreeNode *> v;
    display(root, v);

    int k = 0;
    int j = v.size() - 1;
    int mid;
    while (k <= j)
    {
        mid = (j + k) / 2;
        if (v[mid]->val == target)
        {
            cout << v[mid]->val;
            break;
        }
        else if (v[mid]->val > target)
        {
            j = mid - 1;
        }
        else if (v[mid]->val < target)
        {
            k = mid + 1;
        }
    }
}