#include <iostream>
#include <vector>
#include <queue>
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

int main()
{
    TreeNode *a = new TreeNode(1);
    TreeNode *b = new TreeNode(2);
    TreeNode *c = new TreeNode(3);
    TreeNode *d = new TreeNode(4);
    TreeNode *e = new TreeNode(5);
    TreeNode *f = new TreeNode(6);
    TreeNode *g = new TreeNode(7);
    TreeNode *h = new TreeNode(8);
    TreeNode *i = new TreeNode(9);

    a->left = b;
    a->right = c;
    b->left = d;
    d->left = e;
    TreeNode *root = a;

    vector<int> view;
    TreeNode *temp;
    queue<TreeNode *> q;
    q.push(root);

    int lev_size;
    while (q.size() > 0)
    {
        lev_size = q.size();

        for (int i = 1; i <= lev_size; i++)
        {
            temp = q.front();
            q.pop();
            if (i == lev_size)
            {
                view.push_back(temp->val);
            }
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
    }

    for (int i = 0; i < view.size(); i++)
    {
        cout << view[i];
    }
}