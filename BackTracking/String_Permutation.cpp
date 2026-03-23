#include <iostream>
#include <string>
#include<unordered_set>
using namespace std;
void permutation(string& original,int idx)
{
    if(idx==original.length()-1){
        cout<<original<<endl;
        return;
    }
    unordered_set<char> set;
    for (int i =idx; i < original.size(); i++)
    {
        if(set.find(original[i])!=set.end()) continue;

        set.insert(original[i]);
        swap(original[i],original[idx]);
        permutation(original,idx+1);
        swap(original[i],original[idx]);
    }
}
int main()
{
    string s="abc";
    permutation(s,0);
}