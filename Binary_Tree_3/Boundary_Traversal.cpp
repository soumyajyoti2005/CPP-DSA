#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
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

TreeNode *constuct(int arr[], int n)
{
    queue<TreeNode *> q;
    TreeNode *root = new TreeNode(arr[0]);
    q.push(root);

    int i = 1;
    int j = 2;
    while (q.size() > 0 && j < n)
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
    return root;
}

int level(TreeNode *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(level(root->left), level(root->right));
}

void nth_elements(TreeNode *root, int lev, int ex_lev)
{

    if (root == NULL)
    {
        return;
    }
    if (lev == ex_lev)
    {
        cout << root->val << " ";
        return;
    }

    nth_elements(root->left, lev + 1, ex_lev);
    nth_elements(root->right, lev + 1, ex_lev);
}

void lev_elements(TreeNode *root)
{
    for (int i = 1; i <= level(root); i++)
    {
        nth_elements(root, 1, i);
        cout << endl;
    }
}

void display_leaf(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left == NULL && root->right == NULL)
    {
        cout << root->val << " ";
        return;
    }

    display_leaf(root->left);
    display_leaf(root->right);
}

void display_left(TreeNode *root)
{
    if (root->left == NULL && root->right == NULL)
    {
        return;
    }
    cout << root->val << " ";
    if (root->left == NULL)
    {
        display_left(root->right);
    }
    else
    {
        display_left(root->left);
    }
}

void display_right(TreeNode *root)
{
    if (root->left == NULL && root->right == NULL)
    {
        return;
    }

    if (root->right == NULL)
    {
        display_right(root->left);
    }
    else
    {
        display_right(root->right);
    }
    cout << root->val << " ";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, INT16_MIN, 6, 7, INT16_MIN, 8, INT16_MIN, 9, 10, INT16_MIN, 11,
                 INT16_MIN, 12, INT16_MIN, 13, INT16_MIN, 14, 15, 16, INT16_MIN, 17, INT16_MIN, INT16_MIN,
                 18, INT16_MIN, 19, INT16_MIN, INT16_MIN, INT16_MIN, 20, 21, 22, 23, INT16_MIN,
                 24, 25, 26, 29, INT16_MIN, INT16_MIN, 28, INT16_MIN, INT16_MIN};

    TreeNode *root = constuct(arr, 47);
    lev_elements(root);
    cout << endl;
    display_leaf(root);
    cout << endl;
    display_left(root);
    cout << endl;
    display_right(root->right);
}