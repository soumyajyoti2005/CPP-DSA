#include <iostream>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode *prev;

    ListNode(int val)
    {
        this->val = val;
        this->prev = nullptr;
        this->next = nullptr;
    }
};

class Deque{
    public:
       ListNode* head=NULL;
       ListNode* tail=NULL;
       int siz=0;

    void push_back(int val){
        ListNode* temp=new ListNode(val);
        
        if(siz==0) {
           head=temp;
           tail=temp;
           siz++;
           return;
        }
        tail->next=temp;
        temp->prev=tail;
        tail=tail->next;
        siz++;
        
    }

    void push_front(int val){
        ListNode* temp=new ListNode(val);
        
        if(siz==0) {
           head=temp;
           tail=temp;
           siz++;
           return;
        }
        temp->next=head;
        head->prev=temp;
        head=temp;
        siz++;
    }

    void pop_front(){
        if(head==NULL) return;
        if(head->next== NULL && head->prev==NULL){
             head=head->next;
             tail=NULL;
             siz--;
             return;
        }
        siz--;
        head=head->next;
        head->prev=NULL;
    }

    void pop_back(){
        if(tail==NULL) return;
        if(tail->next== NULL && tail->prev==NULL){
             tail=tail->prev;
             head=NULL;
             siz--;
             return;
        }
        siz--;
        tail=tail->prev;
        tail->next=NULL;
        
    }

    int front(){
        if(head==NULL) return -1;
        return head->val;
    }

    int back(){
        if(tail==NULL) return -1;
        return tail->val;
    }
    
    int size(){
        return siz;
    }
};

int main(){
    Deque dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.push_front(4);

    

    while(dq.size()>0){
        cout<<dq.front();
        dq.pop_back();
    }
    cout<<dq.size();
    cout<<dq.front();
    

}