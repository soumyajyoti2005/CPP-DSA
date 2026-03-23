#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int divisors_sum(int n){
    bool flag=true;
    int count=0;
    int sum=0;

    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if((n/i) == i){
                count++;
                sum+=i;
            }
            else{
                count+=2;
                sum+=i+(n/i);
            }
        }
        if(count>4){
            flag=false;
            break;
        }
    }

    if(flag && count==4){
        return sum;
    }
    return 0;
}

int main(){
    vector<int> nums={21,4,7};

    int sum=0;
    for(int i=0;i<nums.size();i++){
       sum+=divisors_sum(nums[i]);
    }

    cout<<sum;

    
}