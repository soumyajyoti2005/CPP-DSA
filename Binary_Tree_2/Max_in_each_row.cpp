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
    TreeNode *b = new TreeNode(4);
    TreeNode *c = new TreeNode(3);
    TreeNode *d = new TreeNode(6);
    TreeNode *e = new TreeNode(2);
    TreeNode *f = new TreeNode(7);
    TreeNode *g = new TreeNode(9);
    TreeNode *h = new TreeNode(5);
    TreeNode *i = new TreeNode(1);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    f->left = h;
    g->right = i;
    TreeNode *root = a;

    vector<int> ans;

    queue<TreeNode *> q;
    TreeNode *temp;
    q.push(root);

    int value;
    int max_val = INT32_MIN;
    int level_size;

    while (q.size() > 0)
    {
        level_size = q.size();
        max_val = INT32_MIN;
        for (int i = 1; i <= level_size; i++)
        {
            temp = q.front();
            q.pop();
            value = temp->val;
            if (value > max_val)
            {
                max_val = value;
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
        ans.push_back(max_val);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
}