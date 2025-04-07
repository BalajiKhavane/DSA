#include <iostream>
#include <vector>
using namespace std;
bool IsIncreasing (vector<int>& nums){
    for(int i=1;i<nums.size();i++){
        if(nums[i] < nums[i-1]){
            return false;
        }
    }
    return true;
}
bool IsDecreasing (vector<int>& nums){
    for(int i=1;i<nums.size();i++){
        if(nums[i] > nums[i-1]){
            return false;
        }
    }
    return true;
}
bool isMonotonic(vector<int>& nums) {
    return (IsIncreasing(nums) or IsDecreasing(nums));
}
int main(){
    vector<int> nums = {1,2,2,3};
    cout<<isMonotonic(nums)<<endl;
    
    nums = {6,5,4,4};
    cout<<isMonotonic(nums)<<endl;
    
    nums = {1,3,2};
    cout<<isMonotonic(nums)<<endl;

    return 0;
}