#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void subsets(vector<vector<int>>& ans, vector<int> temp, int i, vector<int> nums){
    if(i == nums.size()){
        ans.push_back(temp);
        return;
    }
    temp.push_back(nums[i]);
    subsets(ans, temp, i+1, nums);      //Include
    temp.pop_back();
    int idx = i+1;
    while(idx<nums.size() and nums[idx]==nums[idx-1]){      //Skips duplicates
        idx++;
    }
    subsets(ans, temp, idx, nums);         //Exclude
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<int> temp;
    vector<vector<int>> ans;
    subsets(ans,temp,0,nums);
    
    return ans;
}
int main(){
    vector<int> nums;
    vector<vector<int>> result;
    nums = {1,2,2};
    result = subsetsWithDup(nums);

    for(auto i : result){
        for(auto j : i){
            cout<<j<<"\t";
        }cout<<endl;
    }cout<<endl;
    
    nums = {0};
    result = subsetsWithDup(nums);
    
    for(auto i : result){
        for(auto j : i){
            cout<<j<<"\t";
        }cout<<endl;
    }

    return 0;
}