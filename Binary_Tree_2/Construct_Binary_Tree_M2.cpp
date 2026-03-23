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

    int i=1;
    while(q.size()>0 && i<13){
        if(arr[i]!=INT16_MIN){
            TreeNode* new_node=new TreeNode(arr[i]);
            q.front()->left=new_node;
            q.push(new_node);
            i++;
        }

        else i++;

        if(arr[i]!=INT16_MIN){
            TreeNode* new_node=new TreeNode(arr[i]);
            q.front()->right=new_node;
            q.push(new_node);
            i++;
        }

        else i++;
        q.pop();
    }
    

    display(root);
}