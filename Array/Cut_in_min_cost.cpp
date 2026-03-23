#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> nums={10,1,3,1};

    int min_idx=1;
    for(int i=2;i<nums.size();i++){
        if(nums[min_idx]>nums[i]) min_idx=i;
    }
    
    int smin_idx=1;
    for(int i=2;i<nums.size() ;i++){
        if(nums[smin_idx]>nums[i] and i!=min_idx) smin_idx=i;
    }

    cout<<min_idx<<" "<<smin_idx;
}