#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
string triangleType(vector<int>& nums) {
    if(nums[0]==nums[1] && nums[1]==nums[2]) return "equilateral";
    sort(nums.begin(),nums.end()); 
    if((nums[0]+nums[1])>nums[2]){
        if((nums[0]==nums[1]) || (nums[1]==nums[2]) || (nums[0]==nums[2])) return "isosceles";
        else
            return "scalene";
    }
    return "none";
}
int main(){
    vector<int> nums{3,3,3};
    cout<<triangleType(nums)<<endl;
    nums = {3,4,5};
    cout<<triangleType(nums)<<endl;

    return 0;
}