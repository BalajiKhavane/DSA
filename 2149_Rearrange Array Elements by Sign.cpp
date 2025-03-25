#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int>& nums) {
    int pos = 0, neg = 1;
    vector<int> ans(nums.size());
    for(int i=0;i<nums.size();i++){
        if(nums[i] > 0){
            ans[pos] = nums[i];
            pos += 2;
        }else{
            ans[neg] = nums[i];
            neg += 2;
        }
    }
    return ans;
}
int main(){
    vector<int> result, nums = {3,1,-2,-5,2,-4};
    result = rearrangeArray(nums);
    for(int i : result){
        cout<<i<<"\t";
    }cout<<endl;

    nums = {-1,1};
    result = rearrangeArray(nums);
    for(int i : result){
        cout<<i<<"\t";
    }cout<<endl;

    return 0;
}