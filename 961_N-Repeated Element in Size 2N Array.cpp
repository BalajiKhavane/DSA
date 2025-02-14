#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int repeatedNTimes(vector<int>& nums) {
    set<int> set;
    for(auto i : nums){
        if(set.find(i) != set.end()){
            return i;
        }
        set.insert(i);
    }
    return 0;
}
int main(){
    vector<int> nums;
    nums = {1,2,3,3};
    cout<<repeatedNTimes(nums)<<endl;
    
    nums = {2,1,2,5,3,2};
    cout<<repeatedNTimes(nums)<<endl;
    
    nums = {5,1,5,2,5,3,5,4};
    cout<<repeatedNTimes(nums)<<endl;

    return 0;
}