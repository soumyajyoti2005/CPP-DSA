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

void target_level(TreeNode *root, int target, int lev, int *tar_lev, TreeNode **target_node)
{
    if (root == NULL)
        return;
    if ((root->left && root->left->val == target) || (root->right && root->right->val == target))
    {
        (*tar_lev) = lev;
        (*target_node) = root;
        return;
    }
    target_level(root->left, target, lev + 1, tar_lev, target_node);
    target_level(root->right, target, lev + 1, tar_lev, target_node);
}

bool is_cousins(TreeNode* root,int x,int y){
    int tar_lev = 1;
    TreeNode *target_node;

    target_level(root,x,1,&tar_lev,&target_node);
    int lev_x=tar_lev+1;
    TreeNode* x_parent=target_node;

    target_level(root,y,1,&tar_lev,&target_node);
    int lev_y=tar_lev+1;
    TreeNode* y_parent=target_node;

    if(lev_x == lev_y && x_parent != y_parent) return true;
    return false;

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
    c->left = f;
    c->right = g;
    TreeNode *root = a;

    int tar_lev;
    TreeNode* target_node;
    target_level(root,4,1,&tar_lev,&target_node);
    cout<<tar_lev;
}