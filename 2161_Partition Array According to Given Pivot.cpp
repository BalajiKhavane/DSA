#include <iostream>
#include <vector>
using namespace std;
vector<int> pivotArray(vector<int>& nums, int pivot) {
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        if(nums[i] < pivot){
            ans.push_back(nums[i]);
        }
    }
    for(int i=0;i<nums.size();i++){
        if(nums[i] == pivot){
            ans.push_back(nums[i]);
        }
    }
    for(int i=0;i<nums.size();i++){
        if(nums[i] > pivot){
            ans.push_back(nums[i]);
        }
    }
    return ans;
}
int main(){
    int pivot = 10;
    vector<int> nums,result;
    nums = {9,12,5,10,14,3,10};
    result = pivotArray(nums,pivot);
    for(auto i : result){
        cout<<i<<'\t';
    }cout<<endl;
    
    pivot = 2;
    nums = {-3,4,3,2};
    result = pivotArray(nums,pivot);
    for(auto i : result){
        cout<<i<<'\t';
    }cout<<endl;

    return 0;
}