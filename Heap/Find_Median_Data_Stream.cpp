#include<iostream>
#include<queue>
using namespace std;
class MedianFinder {
public:
    priority_queue<int> left;
    priority_queue<int,vector<int>,greater<int>> right;

    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(left.size()==0 || left.top()>=num){
            cout<<"in maxheap"<<endl;
            left.push(num);
        }
        else if(left.top()<num){
           cout<<"in minheap"<<endl;
           right.push(num);
        }
        // if(left.size()-right.size()>1 ){
        //     int x=left.top();
        //     left.pop();
        //     right.push(x);
        // }
        // else if( right.size()-left.size()>1){
        //     int x=right.top();
        //     right.pop();
        //     left.push(x);
        // }

         if (left.size() > right.size() + 1) {
            right.push(left.top());
            left.pop();
        } 
        else if (right.size() > left.size() + 1) {
            left.push(right.top());
            right.pop();
        }
    }
    
    double findMedian() {
        if(left.size()==right.size()){
            return (left.top()+right.top())/2.0;
        }
        else {
            if(left.size()>right.size()) return left.top();
            else return right.top();
        }
    }
};

int main(){
    MedianFinder* m=new MedianFinder();
    
    m->addNum(6);
    m->addNum(1);
    m->addNum(2);

    

}