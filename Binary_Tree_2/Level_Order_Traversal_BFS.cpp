#include <iostream>
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
    b->right = e;
    c->left = f;
    c->right = g;
    f->left = h;
    g->right = i;
    TreeNode *root = a;

    queue<TreeNode *> q;
    TreeNode *temp;
    q.push(root);
    int count = 0;
    int prevcount = 0;
    while (q.size() > 0)
    {
        temp = q.front();
        q.pop();
        cout << temp->val << " ";

        count++;
        if (temp->left != NULL)
        {
            q.push(temp->left);
        }

        count++;
        if (temp->right != NULL)
        {
            q.push(temp->right);
        }
        if ((prevcount < count) && (count & (count - 1)) == 0)
        {
            cout << endl;
            prevcount = count;
            count = 0;
        }
    }
}