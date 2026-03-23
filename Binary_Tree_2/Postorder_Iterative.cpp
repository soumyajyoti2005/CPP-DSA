#include <iostream>
#include <stack>
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

int main()
{
    TreeNode *a = new TreeNode(1);
    TreeNode *b = new TreeNode(2);
    TreeNode *c = new TreeNode(3);
    TreeNode *d = new TreeNode(4);
    TreeNode *e = new TreeNode(5);
    TreeNode *f = new TreeNode(6);
    TreeNode *g = new TreeNode(7);
    // TreeNode *h = new TreeNode(8);
    // TreeNode *i = new TreeNode(9);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    // f->left = h;
    // g->right = i;
    TreeNode *root = a;

    vector<int> ans;
    stack<TreeNode *> st;
    st.push(root);

    while (st.size() > 0)
    {
        TreeNode *temp = st.top();
        st.pop();
        ans.push_back(temp->val);
        if (temp->left != NULL)
            st.push(temp->left);
        if (temp->right != NULL)
            st.push(temp->right);
    }
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
}