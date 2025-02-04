#include <iostream>
#include <vector>
using namespace std;
int maxAscendingSum(vector<int>& nums) {
    if(nums.size() == 1) return nums[0];
    int max_sum = 0;
    for(int i=1;i<nums.size();i++){
        int sum = nums[i-1];
        while(i<nums.size() and nums[i-1] < nums[i]){
            sum += nums[i];
            i++;
        }
        max_sum = max(max_sum, sum);
    }
    return max_sum;
}
int main(){
    vector<int> nums;
    nums = {10,20,30,5,10,50};
    cout<<maxAscendingSum(nums)<<endl;

    nums = {10,20,30,40,50};
    cout<<maxAscendingSum(nums)<<endl;
    
    nums = {12,17,15,13,10,11,12};
    cout<<maxAscendingSum(nums)<<endl;

    return 0;
}