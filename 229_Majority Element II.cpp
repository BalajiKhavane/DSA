#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> majorityElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans;
    unordered_map<int,int> umap;
    for(auto i : nums) umap[i]++;
    for(auto i : umap){
        if(i.second > n/3){
            ans.push_back(i.first);
        }
    }
    return ans;
}
int main(){
    vector<int> nums{3,2,3};
    nums = majorityElement(nums);
    for(auto i : nums){
        cout<<i<<' ';
    }cout<<endl;

    nums = {1,2};
    nums = majorityElement(nums);
    for(auto i : nums){
        cout<<i<<' ';
    }cout<<endl;

    return 0;
}