#include <iostream>
#include <vector>
#include <unordered_set>
#include <queue>
#include <unordered_map>
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

void traverse(TreeNode* root,unordered_map<TreeNode*,TreeNode*>& map,TreeNode*& st,int start){
        if(root==NULL) return;
        if(root->val==start) st=root;
        if(root->right!=NULL){ 
            map[root->right]=root;
        }
        if(root->left!=NULL){  
            map[root->left]=root;
        }
        traverse(root->left,map,st,start);
        traverse(root->right,map,st,start);
    }

int main()
{
    TreeNode *a = new TreeNode(1);
    TreeNode *b = new TreeNode(5);
    TreeNode *c = new TreeNode(3);
    TreeNode *d = new TreeNode(4);
    TreeNode *e = new TreeNode(10);
    TreeNode *f = new TreeNode(6);
    TreeNode *g = new TreeNode(9);
    TreeNode *h = new TreeNode(2);
    TreeNode *i = new TreeNode(11);

    a->left = b;
    a->right = c;
    b->right = d;
    c->left = e;
    c->right = f;
    d->left = g;
    d->right = h;
    e->right = i;
    TreeNode *root = a;
    int start = 3;

    TreeNode* st;
    unordered_map<TreeNode*,TreeNode*> map;
    traverse(root,map,st,start);

    int minutes=0;
    queue<pair<TreeNode*,int>> q;
    pair<TreeNode*,int> r;
    r.first=st;
    r.second=0;
    q.push(r);
    
    unordered_set<TreeNode*> set;
    set.insert(st);
    

    while(q.size()>0){
        TreeNode* temp=q.front().first;
        int lev=q.front().second;
        
        if(temp->left!=NULL){
            r.first=temp->left;
            r.second=lev+1;
            if(set.find(r.first)==set.end()){
                q.push(r);
                set.insert(r.first);
            }
        }
        if(temp->right!=NULL){
            r.first=temp->right;
            r.second=lev+1;
            if(set.find(r.first)==set.end()){
                q.push(r);
                set.insert(r.first);
            }
        }
        if(map.find(temp)!=map.end()){
            r.first=map[temp];
            r.second=lev+1;
            if(set.find(r.first)==set.end()){
                q.push(r);
                set.insert(r.first);
            }
        }
        q.pop();
        if(lev>minutes) minutes=lev;
    }

    for(auto p: map){
        cout<<p.first->val<<" "<<p.second->val <<endl;
    }
    cout<<minutes;
}