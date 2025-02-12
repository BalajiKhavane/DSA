#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> findDuplicates(vector<int>& nums) {
    if(nums.size() == 1){
        nums.clear();
        return nums;
    }
    unordered_map<int,int> umap;
    for(auto i : nums) umap[i]++;
    nums.clear();
    for(auto i : umap){
        if(i.second == 2){
            nums.push_back(i.first);
        }
    }
    return nums;
}
int main(){
    vector<int> nums;
    nums = {4,3,2,7,8,2,3,1};
    findDuplicates(nums);
    for(auto i : nums){
        cout<<i<<"\t";
    }cout<<endl;

    nums = {1,1,2};
    findDuplicates(nums);
    for(auto i : nums){
        cout<<i<<"\t";
    }cout<<endl;

    nums = {1};
    findDuplicates(nums);
    for(auto i : nums){
        cout<<i<<"\t";
    }cout<<endl;

    return 0;
}