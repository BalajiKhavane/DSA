#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> sortArrayByParity(vector<int>& nums) {
    int snowballSize = 0;
    int l = nums.size();
    for (int i = 0; i < l; i++) {
        if (nums[i] % 2 != 0) {
            snowballSize++;
        } else {
            swap(nums[i], nums[i - snowballSize]);
        }
    }
    return nums;
}
int main(){
    vector<int> nums = {3,1,2,4};
    sortArrayByParity(nums);
    for(auto i : nums){
        cout<<i<<"\t";
    }cout<<endl;

    return 0;
}