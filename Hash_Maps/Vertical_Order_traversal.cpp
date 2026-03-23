#include <iostream>
#include <vector>
#include <set>
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
    TreeNode *e = new TreeNode(6);
    TreeNode *f = new TreeNode(5);
    TreeNode *g = new TreeNode(7);
   

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    
    TreeNode *root = a;

    queue<pair<TreeNode *, int>> q; // treenode,col
    pair<TreeNode*,int> p;
    p.first=root;
    p.second=0;
    q.push(p);

    map<int,map<int,multiset<int>>> map; //col,map<row,set(value)>
    int row=1;

    while(q.size()>0){
        int n=q.size();
        for(int i=1;i<=n;i++){
            TreeNode* temp=q.front().first;
            int col=q.front().second;
            map[col][row].insert(temp->val);

            if(temp->left!=NULL){
                p.first=temp->left;
                p.second=col-1;
                q.push(p);
            }
            if(temp->right!=NULL){
                p.first=temp->right;
                p.second=col+1;
                q.push(p);
            }

            q.pop();
        }
        row++;
    }

    vector<vector<int>> ans;
    

    for(auto p: map){
        vector<int> v;
        for(auto r: p.second){
            for(auto x: r.second){
                v.push_back(x);
            }
        }
        ans.push_back(v);
    }

    for(auto x: ans){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}