#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int longestMonotonicSubarray(vector<int>& nums) {
    int max_inc = 1, max_dec = 1, i = 1;
    while(i<nums.size()){
        while(i<nums.size() and nums[i-1] == nums[i]) i++;

        int inc = 1;
        while(i<nums.size() and nums[i-1] < nums[i]){
            inc++;i++;
            max_inc = max(max_inc, inc);
        }

        int dec = 1;
        while(i<nums.size() and nums[i-1] > nums[i]){
            dec++;i++;
            max_dec = max(max_dec, dec);
        }
    }
    return (max_inc <= max_dec)? max_dec : max_inc;
}
int main(){
    vector<int> nums;
    nums = {1,4,3,3,2};
    cout<<longestMonotonicSubarray(nums)<<endl;
    nums = {3,3,3,3};
    cout<<longestMonotonicSubarray(nums)<<endl;
    nums = {3,2,1};
    cout<<longestMonotonicSubarray(nums)<<endl;

    return 0;
}