#include <iostream>
#include <vector>
using namespace std;
void getPermutations(vector<int>& nums, int idx, vector<vector<int>>& ans){
    if(idx == nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i=idx;i<nums.size();i++){
        swap(nums[i],nums[idx]);
        getPermutations(nums, idx+1, ans);
        swap(nums[i],nums[idx]);
    }
}
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    getPermutations(nums,0,ans);
    return ans;
}
int main(){
    vector<int> nums;
    vector<vector<int>> result;
    nums = {1,2,3};
    result = permute(nums);

    for(auto i : result){
        for(auto j : i){
            cout<<j<<"\t";
        }cout<<endl;
    }cout<<endl;
    
    nums = {0,1};
    result = permute(nums);

    for(auto i : result){
        for(auto j : i){
            cout<<j<<"\t";
        }cout<<endl;
    }cout<<endl;

    return 0;
}