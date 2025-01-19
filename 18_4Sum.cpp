#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<vector<int>> ans;
    if(n < 4) return ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        if(i>0 and nums[i] == nums[i-1]) continue;
        for(int j=i+1;j<n;j++){
            if(j>i+1 and nums[j] == nums[j-1]) continue;
            int p = j+1, q = n-1;
            while(p < q){
                long long sum = (long long) nums[i]+nums[j]+nums[p]+nums[q];
                if(sum < target){
                    p++;
                }else if(sum > target){
                    q--;
                }else{
                    ans.push_back({nums[i],nums[j],nums[p],nums[q]});
                    p++;q--;
                    while(p<q and nums[p] == nums[p-1]) p++;
                    while(q>p and nums[q] == nums[q+1]) q--;
                }
            }
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> result;
    
    int target = 0;
    vector<int> nums = {1,0,-1,0,-2,2};
    result = fourSum(nums,target);

    for(auto i : result){
        for(auto j : i){
            cout<<j<<"\t";
        }cout<<endl;
    }cout<<endl;

    nums = {2,2,2,2,2};
    target = 8;
    result = fourSum(nums,target);

    for(auto i : result){
        for(auto j : i){
            cout<<j<<"\t";
        }cout<<endl;
    }cout<<endl;

    return 0;
}