#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int missingInteger(vector<int>& nums) {
    int sum = nums[0];
    set<int> set;
    for(auto i : nums) set.insert(i);
    for(int i=1;i<nums.size();i++){
        if(nums[i-1]+1 == nums[i]){
            sum += nums[i];
        }else{
            break;
        }
    }
    while(true){
        if(set.find(sum) == set.end()){
            return sum;
        }else{
            sum++;
        }
    }
    return sum;
}
int main(){
    vector<int> nums;
    nums = {1,2,3,2,5};
    cout<<missingInteger(nums)<<endl;
    
    nums = {3,4,5,1,12,14,13};
    cout<<missingInteger(nums)<<endl;

    return 0;
}