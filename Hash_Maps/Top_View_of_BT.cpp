#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include<map>
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

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = f;
    e->left = g;
    e->right = h;
    TreeNode *root = a;

    queue<pair<TreeNode *, int>> q;
    pair<TreeNode*,int> r;
    r.first=root;
    r.second=0;
    q.push(r);

    map<int,int> map;
    

    while(q.size()>0){
        TreeNode* temp=q.front().first;
        int lev=q.front().second;
        q.pop();

        if(temp->left!=NULL){
            r.first=temp->left;
            r.second=lev-1;
            q.push(r);
        }
        if(temp->right!=NULL){
            r.first=temp->right;
            r.second=lev+1;
            q.push(r);
        }
        
        if(map.size()==0 || map.find(lev)==map.end()){
            map[lev]=temp->val;
        }
    }

    for(auto p: map){
        cout<<p.second<<" ";
    }
}