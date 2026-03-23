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

int sum(TreeNode* root){
    if(root==NULL) return 0;
    return root->val +sum(root->left)+sum(root->right);
}

void tilt_tree(TreeNode* root,int &tilt_sum){
    if(root==NULL) return;
    
    int x=sum(root->left);
    int y=sum(root->right);
    if(x>y) (tilt_sum)+=x-y;
    else (tilt_sum)+=y-x;

    tilt_tree(root->left, tilt_sum);
    tilt_tree(root->right, tilt_sum);
}

void traverse(TreeNode *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    traverse(root->left);
    traverse(root->right);
}

int main()
{
    TreeNode *a = new TreeNode(4);
    TreeNode *b = new TreeNode(2);
    TreeNode *c = new TreeNode(9);
    TreeNode *d = new TreeNode(3);
    TreeNode *e = new TreeNode(5);
    TreeNode *f = new TreeNode(6);
    TreeNode *g = new TreeNode(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    // c->left = f;
    c->right = g;
    TreeNode* root=a;

    int tilt_sum=0;
    tilt_tree(root,tilt_sum);
    cout<<tilt_sum;


}