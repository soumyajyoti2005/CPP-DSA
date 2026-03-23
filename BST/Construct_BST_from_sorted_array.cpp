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
    cout << root->val << " ";
    display(root->left);
    display(root->right);
}

TreeNode *construct(vector<int> v, int lo, int hi)
{
    if (lo > hi)
    {
        return NULL;
    }

    int mid = (lo + hi) / 2;
    TreeNode *newnode = new TreeNode(v[mid]);
    newnode->left = construct(v, lo, mid - 1);
    newnode->right = construct(v, mid + 1, hi);
    return newnode;
}

int main()
{

    vector<int> nums;
    for (int i = 1; i <= 7; i++)
    {
        nums.push_back(i);
    }

    int n = nums.size();
    TreeNode *root = construct(nums, 0, n - 1);
    display(root);
}