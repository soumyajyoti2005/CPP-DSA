#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class ListNode{
public:
int val;
ListNode* next;

ListNode(int val){
    this->val=val;
    next=NULL;
}
};


int main()
{
    ListNode* a=new ListNode(2);
    ListNode* b=new ListNode(7);
    ListNode* c=new ListNode(4);
    ListNode* d=new ListNode(3);
    ListNode* e=new ListNode(5);
    
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    ListNode* head=a;


    ListNode* prev=head;
    ListNode* temp=head->next;
    ListNode* k=temp;
    int len=1;
    while(temp!=NULL){
       temp=temp->next;
       k->next=prev;
       prev=k;
       k=temp;
       len++;
    }
    head->next=NULL;
    head=prev;

    stack<int> st;
    vector<int>nge(len);

    temp=head->next;
    st.push(head->val);
    int i=len-2;
    while(temp!=NULL){
        while(st.size()>0 && st.top()<=temp->val) st.pop();
        if(st.size()>0) nge[i]=st.top();
        st.push(temp->val);
        temp=temp->next;
        i--;
    }

    for(int i=0;i<len;i++){
    cout<<nge[i]<<" ";
    }
}

