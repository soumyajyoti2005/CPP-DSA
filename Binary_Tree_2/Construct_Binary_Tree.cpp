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
        this->val = val; //124578369  124578369
        left = NULL;
        right = NULL;
    }
};

void display(TreeNode *root)
{
    if (root == NULL)
        return;
    cout << root->val;
    display(root->left);
    display(root->right);
}

int main()
{
    queue<TreeNode *> q;
    int arr[] = {1, 2, 3, 4, 5, INT16_MIN, 6, INT16_MIN, INT16_MIN, 7, 8, 9, INT16_MIN};
    TreeNode *root = new TreeNode(arr[0]);
    q.push(root);

    int i = 1;
    int j = 2;
    while (q.size() > 0 && j < 13)
    {
        TreeNode *temp = q.front();
        q.pop();
        TreeNode *l;
        TreeNode *r;
        if (arr[i] != INT16_MIN)
            l = new TreeNode(arr[i]);
        else
            l = NULL;
        if (arr[j] != INT16_MIN)
            r = new TreeNode(arr[j]);
        else
            r = NULL;
        if (l != NULL)
            q.push(l);
        if (r != NULL)
            q.push(r);
        temp->left = l;
        temp->right = r;

        i += 2;
        j += 2;
    }

    display(root);
}