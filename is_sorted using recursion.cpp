#include <iostream>
#include <vector>
using namespace std;
bool isSorted(vector<int>& nums, int n){
    if(n == 1){
        return true;
    }
    if(nums[n] < nums[n-1]){
        return false;
    }
    return isSorted(nums,n-1);
}
int main(){
    vector<int> nums{39,23,59,22,40};
    cout<<isSorted(nums,nums.size()-1)<<endl;

    nums = {12,23,45,55};
    cout<<isSorted(nums,nums.size()-1)<<endl;

    return 0;
}