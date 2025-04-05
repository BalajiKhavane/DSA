#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int dfs(vector<int>& nums, int index, int currXor) {
    if (index == nums.size()) {
        return currXor;
    }
    // Include nums[index]
    int with = dfs(nums, index + 1, currXor ^ nums[index]);
    // Exclude nums[index]
    int without = dfs(nums, index + 1, currXor);
    return with + without;
}
int subsetXORSum(vector<int>& nums) {
    return dfs(nums, 0, 0);
}

int main(){
    vector<int> nums = {1,3};
    cout<<subsetXORSum(nums)<<endl;
    
    nums = {5,1,6}; 
    cout<<subsetXORSum(nums)<<endl;
    
    nums = {3,4,5,6,7,8};
    cout<<subsetXORSum(nums)<<endl;

    return 0;
}