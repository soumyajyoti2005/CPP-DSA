#include<iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class Queue{
    public:
        Node* head=NULL;
        Node* tail=NULL;
        int siz=0;
    
    void push(int val){
       Node* temp= new Node(val);
       if(siz==0) {
        head=temp;
        tail=temp;
       }
       else{
         tail->next=temp;
         tail=tail->next;
       }
       siz++;
    }

    void pop(){
        if(siz==0) return;
        head=head->next;
        siz--;
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

    Queue q;
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();
    q.pop();
    cout<<q.front();
    cout<<q.back();
    cout<<q.size();
}