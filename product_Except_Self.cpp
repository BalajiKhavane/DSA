#include <iostream>
#include <vector>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums){
    int n=nums.size();
    vector<int> ans(n,1);
    //For calculating prefix
    for(int i=1;i<nums.size();i++){
        ans[i] = ans[i-1] * nums[i-1];        
    }
    //For calculating suffix
    int suffix=1;
    for(int j=nums.size()-2;j>=0;j--){
        suffix *= nums[j+1];
        ans[j] *=suffix;          
    }

    return ans;
}
int main(){
    vector<int> nums={1,2,3,4};
    vector<int> ans;
    ans = productExceptSelf(nums);
    for(int i: ans){
        cout<<i<<" ";
    }

    return 0;
}