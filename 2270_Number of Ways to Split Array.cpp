#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int waysToSplitArray(vector<int>& nums) {
    long long sum = 0, prefix_sum = 0, count = 0;
    for(int i : nums){
        sum += i;
    }
    for(int i=0;i<nums.size()-1;i++){
        prefix_sum += nums[i];
        sum -= nums[i];
        if(prefix_sum >= sum){
            count++;
        }
    }
    return count;
}
int main(){
    vector<int> nums = {10,4,-8,7};
    cout<<waysToSplitArray(nums)<<endl;
    nums = {10,4,-8,7};
    cout<<waysToSplitArray(nums)<<endl;

    return 0;
}