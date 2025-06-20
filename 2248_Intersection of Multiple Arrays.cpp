#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<vector<int>>& nums) {
    vector<int> ans;
    unordered_map<int,int> freq;
    for(auto i : nums){
        for(auto j : i){
            freq[j]++;
            if(freq[j] >= nums.size()){
                ans.push_back(j);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    vector<vector<int>> nums;
    vector<int> result;
    nums = {{3,1,2,4,5},{1,2,3,4},{3,4,5,6}};
    result = intersection(nums);
    for(auto i : result){
        cout<<i<<"\t";
    }cout<<endl;

    nums = {{1,2,3},{4,5,6}};
    result = intersection(nums);
    for(auto i : result){
        cout<<i<<"\t";
    }cout<<endl;

    return 0;
}