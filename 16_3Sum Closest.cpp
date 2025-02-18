#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int threeSumClosest(vector<int>& nums, int target) {
    int sum = 0, diff = INT_MAX, ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        int st = i+1, end = nums.size()-1;
        while(st < end){
            sum = nums[i]+nums[st]+nums[end];
            if(sum == target) return sum;
            else if(abs(sum - target) < diff){
                diff = abs(sum - target);
                ans = sum;
            }
            if(target < sum) end--;
            else st++;
        }
    }
    return ans;
}
int main(){
    int target = 1;
    vector<int> nums;
    nums = {-1,2,1,-4};
    cout<<threeSumClosest(nums,target)<<endl;
    
    nums = {0,0,0};
    cout<<threeSumClosest(nums,target)<<endl;
    
    target = -2;
    nums = {4,0,5,-5,3,3,0,-4,-5};
    cout<<threeSumClosest(nums,target)<<endl;

    return 0;
}