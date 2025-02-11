#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int numIdenticalPairs(vector<int>& nums){
    unordered_map<int,int> umap;
    int count = 0;
    for(auto i : nums) umap[i]++;
    for(auto i : umap){
        count += i.second * (i.second - 1) / 2;
    }
    return count;
}
int main(){
    vector<int> nums;
    nums = {1,2,3,1,1,3};
    cout<<numIdenticalPairs(nums)<<endl;
    
    nums = {1,1,1,1};
    cout<<numIdenticalPairs(nums)<<endl;
    
    nums = {1,2,3};
    cout<<numIdenticalPairs(nums)<<endl;

    return 0;
}