#include <iostream>
#include <vector>
using namespace std;
void sortColors(vector<int>& nums) {
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i] > nums[j]){
                swap(nums[i],nums[j]);
            }
        }
    }
}
int main(){
    vector<int> nums{2,0,2,1,1,0};
    sortColors(nums);
    for(int i : nums){
        cout<<i<<'\t';
    }cout<<endl;

    nums = {2,0,1};
    sortColors(nums);
    for(int i : nums){
        cout<<i<<'\t';
    }cout<<endl;

    return 0;
}