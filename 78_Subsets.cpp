#include <iostream>
#include <vector>
using namespace std;
void storeSubsets(vector<vector<int>>& ans, vector<int>& nums, int i, vector<int>& temp){
    if(i == nums.size()){
        ans.push_back(temp);
        return ;
    }
    temp.push_back(nums[i]);
    storeSubsets(ans, nums, i+1, temp);
    temp.pop_back();
    storeSubsets(ans, nums, i+1, temp);
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> temp;
    storeSubsets(ans, nums, 0, temp);

    return ans;
}
int main(){
    vector<vector<int>> result;
    vector<int> nums;
    nums = {1,2,3};
    result = subsets(nums);

    for(auto i : result){
        for(auto j : i){
            cout<<j<<"\t";
        }cout<<endl;
    }cout<<endl;

    return 0;
}