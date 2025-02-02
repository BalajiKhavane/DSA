#include <iostream>
#include <vector>
using namespace std;
bool check(vector<int>& nums) {
    int count = 0;
    for(int i=1;i<nums.size();i++){
        if(nums[i-1] > nums[i]){
            count++;
        }
    }
    if((count == 1 and nums[0] >= nums[nums.size()-1]) or count == 0){
        return true;
    }else{
        return false;
    }
    return true;
}
int main(){
    vector<int> nums;
    nums = {3,4,5,1,2};
    cout<<check(nums)<<endl;
    nums = {2,1,3,4};
    cout<<check(nums)<<endl;
    nums = {1,2,3};
    cout<<check(nums)<<endl;

    return 0;
}