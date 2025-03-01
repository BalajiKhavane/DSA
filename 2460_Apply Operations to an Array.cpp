#include <iostream>
#include <vector>
using namespace std;
vector<int> applyOperations(vector<int>& nums) {
    int n = nums.size()-1;
    for(int i=0;i<n;i++){
        if(nums[i] == nums[i+1]){
            nums[i] = nums[i]*2;
            nums[i+1] = 0;
        }
    }
    //shifting zeros to last
    vector<int> ans;
    for(int i : nums){
        if(i != 0){
            ans.push_back(i);
        }
    }
    for(int i : nums){
        if(i == 0){
            ans.push_back(i);
        }
    }
    
    return ans;
}
int main(){
    vector<int> nums = {1,2,2,1,1,0},result;
    result = applyOperations(nums);
    for(int i : result){
        cout<<i<<"\t";
    }cout<<endl;
    
    nums = {847,847,0,0,0,399,416,416,879,879,206,206,206,272};
    result = applyOperations(nums);
    for(int i : result){
        cout<<i<<"\t";
    }cout<<endl;

    return 0;
}
