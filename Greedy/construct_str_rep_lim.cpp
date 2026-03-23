#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;

string f(string s, int limit) {
        
        unordered_map<char,int> map;
        for(int i=0;i<s.length();i++){
            map[s[i]]++;
        }
        
        priority_queue<pair<char,int>> pq;
        for(auto p: map){
            pq.push(p);
        }

        pair<char,int> r;
        string res="";
        int count=0;
        while(pq.size()>1){
            char ch=pq.top().first;
            int freq=pq.top().second;
            pq.pop();
            count=0;

            while(freq>0){
                cout<<freq<<" ";
                if(count<limit){
                    cout<<"here"<<endl;
                    res+=ch;
                    freq--;
                    count++;
                }
                else{
                    cout<<"else"<<endl;
                    if(pq.top().second==0) pq.pop();
                    char x=pq.top().first;
                    int f=pq.top().second;
                    pq.pop();
                    f--;
                    r.first=x;
                    r.second=f;
                    pq.push(r);
                    res+=x;
                    count=0;
                }
            }
        }

        char c=pq.top().first;
        int fr=pq.top().second;
        pq.pop();
        count=0;
        while(fr>0 && count<limit){
            
                    res+=c;
                    fr--;
                    count++;
                }

                return res;
        }

int main(){
    cout<<f("cczazcc",3);
}
