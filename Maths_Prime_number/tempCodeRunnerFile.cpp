int sum=0;
    for(int i=0;i<nums.size();i++){
       sum+=divisors_sum(nums[i]);
    }

    cout<<sum;