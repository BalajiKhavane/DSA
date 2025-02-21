#include <iostream>
#include <vector>
using namespace std;
int maxSubArray(vector<int>& nums) {
    int sum = 0, max_sum = nums[0];
    for(int i=0;i<nums.size();i++){
        sum += nums[i];
        max_sum = max(max_sum, sum);
        if(sum < 0){
            sum = 0;
            continue;
        }
    }
    return max_sum;
}
int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(nums)<<endl;
    
    nums = {1};
    cout<<maxSubArray(nums)<<endl;
    
    nums = {5,4,-1,7,8};
    cout<<maxSubArray(nums)<<endl;
    
    return 0;
}