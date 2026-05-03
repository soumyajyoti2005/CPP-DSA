#include<iostream>
#include<string>
#include<vector>
using namespace std;

void LPS(vector<int>& lps,string& pattern){
    int length =0;

    for(int i=1;i<pattern.length();i++){
        while(length>0 && pattern[i]!=pattern[length]) length--; //length = lps[length - 1]; -> this is more optimized

        if(pattern[i] == pattern[length]){
            length++;
            lps[i] = length;
        }
    }
}

int KMP(string& s,string& pattern){
       vector<int> lps(pattern.length());
       LPS(lps,pattern);

       int m = pattern.length(), n = s.length(); 
       int i=0,j=0;

       while(i<n && j<m){
         if(s[i] == pattern[j]){
            i++;
            j++;
         }

         else{
            if(j!=0) j= lps[j-1];
            else i++;
         }
       }

       if(j==m) return i-j;
       else return -1;
}

int main(){

    string s;
    string pattern;
    cin>>s;
    cin>>pattern;
    

    int idx = KMP(s,pattern);
    cout<<idx;

    

}