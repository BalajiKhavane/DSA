#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums){
    vector<vector<int>> ans;
    if(nums.size() < 3) return ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        if(i > 0 and nums[i] == nums[i-1]) continue;
        int j = i+1, k = nums.size()-1;
        while(j < k){
            int sum = nums[i]+nums[j]+nums[k];
            if(sum < 0){
                j++;
            }else if(sum > 0){
                k--;
            }else{
                ans.push_back({nums[i],nums[j],nums[k]});
                j++;k--;
                while(j < k && nums[j] == nums[j-1]) j++;
                while(j < k && nums[k] == nums[k+1]) k--;
            }
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> result;
    vector<int> nums = {-1,0,1,2,-1,-4};
    result = threeSum(nums);

    for(auto i : result){
        for(auto j : i){
            cout<<j<<"\t";
        }cout<<endl;
    }cout<<endl;

    return 0;
}